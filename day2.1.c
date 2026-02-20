#include <stdio.h>

int main() {
    int n, pos, i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i=i+1) {
        scanf("%d", &a[i]);
    }
    printf("Enter position u want to delet:");
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position");
        return 0;
    }
    for (i = pos - 1; i < n - 1; i=i+1) {
        a[i] = a[i + 1];
    }

    n=n-1;  

    
    for (i = 0; i < n; i=i+1) {
        printf("%d ", a[i]);
    }

    return 0;
}
