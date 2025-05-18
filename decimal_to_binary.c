#include <stdio.h>
#define MAX 8
int main() {
    int stack[MAX]; 
    int top = -1;   

    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    int number=n;
    while (n > 0) {
        stack[++top] = n % 2;  
        n /= 2; 
    }
    printf("Binary representation of %d: ",number);
    while (top >= 0) {
        printf("%d", stack[top--]);
    }
    printf("\n");

    return 0;
}
