#include <stdio.h>
int main()  
{ 
    int n,i, j, temp;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    int a[n], b[n]; 
    printf("Enter the height of student:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    printf("\nSorting passes:\n");
    for (i = 0; i < n-1; i++) {
        printf("pass %d: ", i + 1);
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
                (swapped =1);
            }
        }
        for (int k = 0; k < n; k++) {
            printf("%d ", b[k]);
        }
        printf("\n");
        if (swapped == 0) { 
            break;
        }
    }
    printf("\nsequence of student:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]); 
    }
    printf("\n");
    return 0;
}
