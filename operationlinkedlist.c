#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL, *newNode, *temp;
    int choice, value;

    do {
        printf("\n1. Insert at Beginning\n2. Insert at End\n3. Delete from Beginning\n4. Delete from End\n5. Display List\n6. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: { 
                printf("Enter value: ");
                scanf("%d", &value);
                newNode = malloc(sizeof(struct Node));
                 newNode->data = value;
                if (head == NULL) {
                head=newNode;
                newNode->next=NULL;
                }
                else{
                newNode->next = head;
                head = newNode;}
                break;
            }

            case 2: { 
                printf("Enter value: ");
                scanf("%d", &value);
                newNode = malloc(sizeof(struct Node));
                if (newNode == NULL) {
                    printf("Memory allocation failed.\n");
                    break;
                }
                newNode->data = value;
                newNode->next = NULL;
                if (head == NULL) {
                    head = newNode;
                } else {
                    temp = head;
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newNode;
                }
                break;
            }

            case 3: { 
                if (head == NULL) {
                    printf("List is empty.\n");
                } else {
                    temp = head;
                    head = head->next;
                    printf("Deleted: %d\n", temp->data);
                    free(temp);
                }
                break;
            }

            case 4: { 
                if (head == NULL) {
                    printf("List is empty.\n");
                } else if (head->next == NULL) {
                    printf("Deleted: %d\n", head->data);
                    free(head);
                    head = NULL;
                } else {
                    temp = head;
                    while (temp->next->next != NULL) {
                        temp = temp->next;
                    }
                    printf("Deleted: %d\n", temp->next->data);
                    free(temp->next);
                    temp->next = NULL;
                }
                break;
            }

            case 5: {
                int i = 1;
                temp = head;
                printf("\nHead: %p\n", head);
                printf("node\tdata\taddress\t\tNext\n");
                if (temp == NULL) {
                    printf("List is empty.\n");
                } else {
                    while (temp != NULL) {
                        printf("%d\t%d\t%p\t%p\n", i++, temp->data, temp, temp->next);
                        temp = temp->next;
                    }
                }
                break;
            }

            case 6: {
                printf("Exiting.\n");
                while (head != NULL) {
                    temp = head;
                    head = head->next;
                    free(temp);
                }
                break;
            }

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}
