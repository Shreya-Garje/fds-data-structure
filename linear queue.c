#include <stdio.h>
#define MAX 100

int main() {
    int q[MAX], size, f = -1, r = -1, ch = 0, val;

    printf("Enter queue size: ");
    scanf("%d", &size);

    while (ch != 4) {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\nChoice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                if (r == size - 1) 
                printf("Full\n");
                else {
                    if (f == -1)
                    f = 0;
                    printf("Enter value: ");
                    scanf("%d", &val);
                    q[++r] = val;
                }
                break;
            case 2:
                if (f == -1) 
                printf("Empty\n");
                else if (f > r) 
                printf("Empty\n");
                else
                printf("Dequeued: %d\n", q[f++]);
                break;
            case 3:
                if (f == -1)
                printf("Empty\n");
                else if (f > r)
                printf("Empty\n");
                else 
                for (int i = f; i <= r; i++) 
                printf("%d ", q[i]);
                break;
            case 4: printf("Exit\n"); 
            break;
            default: printf("Invalid\n");
        }
    }
    return 0;
}
