#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main() {
    struct Node* newNode,* front = NULL;
    struct Node* rear = NULL;
    int choice, value;
    while (choice!=4) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
             newNode = malloc(sizeof(struct Node));
            newNode->data = value;
            newNode->next = NULL;
            if (rear == NULL) {
                front = rear = newNode;
            } else {
                rear->next = newNode;
                rear = newNode;
            }
            printf("Enqueued %d\n", value);
        } else if (choice == 2) {      
            if (front == NULL) {
                printf("Queue is empty.\n");
            } else {
                struct Node* temp = front;
                printf("Dequeued %d\n", front->data);
                front = front->next;
                if (front == NULL) {
                    rear = NULL;
                }
                free(temp);
            }
        } else if (choice == 3) {
            if (front == NULL) {
                printf("Queue is empty.\n");
            } else {
                struct Node* temp = front;
                printf("Queue elements: ");
                while (temp != NULL) {
                    printf("%d ", temp->data);
                    temp = temp->next;
                }
                printf("\n");
            }
        } else if (choice == 4) {
            printf(" exit");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
