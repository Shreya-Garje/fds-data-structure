#include <stdio.h>
#include <stdlib.h>
#include <string.h>
# define STR_LEN 100

struct Node {
    char data[STR_LEN];
    struct Node* next;
};

int main() {
    struct Node* newNode, * top = NULL;
    int choice = 0;
    char value[STR_LEN]; 

    while (choice != 5) {  
        printf("\nStack Menu:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%s", value);  
                newNode = malloc(sizeof(struct Node));
                strcpy(newNode->data, value);  
                newNode->next = top;
                top = newNode;
                printf("%s pushed to stack\n", value);
                break;

            case 2:
                if (top == NULL) {
                    printf("Stack is empty\n");
                } else {
                    struct Node* temp = top;
                    strcpy(value, top->data);  
                    top = top->next;
                    free(temp);
                    printf("%s popped from stack\n", value);  
                }
                break;

            case 3:
                if (top == NULL) {
                    printf("Stack is empty\n");
                } else {
                    printf("Peek element: %s\n", top->data);  
                }
                break;

            case 4:
                if (top == NULL) {
                    printf("Stack is empty\n");
                } else {
                    struct Node* temp = top;
                    printf("Stack elements:\n");
                    printf("node\tdata\t\taddress\t\tnext\n");
                    int i = 1;
                    while (temp != NULL) {
                        printf("%d\t%s\t%p\t%p\n", i, temp->data, temp,temp->next);
                        temp = temp->next;
                        i++;
                    }
                }
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
