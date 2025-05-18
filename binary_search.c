#include <stdio.h>

int main() { 
    int n, i, l, r, mid, data;

    printf("Enter the number of sorted array elements: ");
    scanf("%d", &n);

    int a[n];
int steps=0;
    printf("Enter sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the data you want to find: ");
    scanf("%d", &data);

    l = 0;
    r = n - 1;

    while (l<=r) { 
        steps++;
        mid = (l + r) / 2;

        if (a[mid] == data) {
            printf("Data is found at index %d\n", mid);
            printf ("no of passes taken is %d \n ",steps);
            return 0;
        } 
        else if (a[mid] > data) {
            r = mid -1;
        } 
        else {
            l = mid + 1;
        }
    
}
    printf("Data not found in the array.\n");
    printf ("no of passes taken is %d ",steps);
    return 0;
}

