#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;
    int choice, value;

    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. Insert Node at End\n");
        printf("2. Delete Node from End\n");
        printf("3. Display List with Addresses\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                newNode = (struct Node*)malloc(sizeof(struct Node));
                printf("Enter data: ");
                scanf("%d", &value);
                newNode->data = value;
                newNode->prev = NULL;
                newNode->next = NULL;

                if (head == NULL) {
                    head = newNode;
                    temp = head;
                } else {
                    temp->next = newNode;
                    newNode->prev = temp;
                    temp = newNode;
                }

                printf("Node inserted.\n");
    
                break;

            case 2:
                if (head == NULL) {
                    printf("List is empty. Nothing to delete.\n");
                } else {
                    struct Node* delNode = temp;

                    if (head == temp) {
                        head = NULL;
                        temp = NULL;
                    } else {
                        temp = temp->prev;
                        temp->next = NULL;
                    }

                    printf(" Data: %d\n", delNode->data);
                    free(delNode);
                }
                break;

            case 3:
                int i=0;
                temp = head;
                if (temp == NULL) {
                    printf("List is empty.\n");
                } else {
                    printf("\nDoubly Linked List:\n");
                    printf("Head Address: %p\n", head);
                    while (temp != NULL) {
                        printf("Node: %d \t Address:%p \tData: %d \t Prev: %p \t Next: %p\n",
                               i,temp, temp->data, temp->prev, temp->next);
                        temp = temp->next;
                        i++;
                    }
                }
                break;

            case 4:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
