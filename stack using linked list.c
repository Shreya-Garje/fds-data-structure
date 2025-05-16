#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main() {
    struct Node* newNode,* top = NULL;
    int choice = 0, value;
    while (choice != 4) {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: 
                printf("Enter value to push: ");
                scanf("%d", &value);
                 newNode = malloc(sizeof(struct Node));
                newNode->data = value;
                newNode->next = top;
                top = newNode;
                printf("%d pushed to stack\n", value);
                break;
            case 2: 
                if (top == NULL) {
                    printf("Stack is empty\n");
                } else {
                    struct Node* temp = top;
                    value = top->data;
                    top = top->next;
                    free(temp);
                    printf("%d popped from stack\n", value);
                }
                break;
            case 3:
            int i=1;
                if (top == NULL) {
                    printf("Stack is empty\n");
                }
                else {
                    struct Node* temp = top;
                    printf("Stack elements:\n");
                     printf("top : %p\n",top);
                    printf("node\tdata\taddress\t\tnext\n");
                    while (temp != NULL) {
                        printf("%d\t %d\t %p\t %p\n",i, temp->data,temp,temp->next);
                        temp = temp->next;
                        i++;
                    }
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
