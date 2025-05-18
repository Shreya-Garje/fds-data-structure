#include <stdio.h>

int main() {
    int n, i, ch, value;
    
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int a[n], stack[n];  
    int top = -1, max = n - 1;  

    do {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Push an element:\n");
                if (top == max) {
                    printf("Stack Overflow\n");
                } else {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    stack[++top] = value;
                    printf("Pushed %d into the stack.\n", value);
                }
                break;

            case 2:
                if (top == -1) {
                    printf("Stack Underflow\n");
                } else {
                    printf("Popped %d\n", stack[top--]);
                }
                break;

            case 3:
                if (top == -1) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack elements: ");
                    for (i = top; i >= 0; i--) {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Wrong choice, please try again.\n");
        }
    } while (ch != 4);

    return 0;
}
