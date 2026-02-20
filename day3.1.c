#include <stdio.h>

int main() {
    int n, i, k, found = -1, count = 0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i=i+1) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search");
    scanf("%d", &k);

    
    for (i = 0; i < n; i=i+1) {
        count=count+1;              
        if (a[i] == k) {
            found = i;
            break;
        }
    }
    
    if (found != -1)
        printf("Key found at position %d\n", found + 1);
    else
        printf("Key not found\n");

    printf("Comparisons = %d", count);

    return 0;
}
