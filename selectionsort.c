#include <stdio.h>
int main() {
    int n, i, j, temp;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) { 
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
         
        printf("Pass %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
    printf("The selection sorted elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
