#include <stdio.h>

int main() {
    int n, i,e,a;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter array elements:\n");
    for (i = 0; i < n-1; i=i+1) {
        scanf("%d", &arr[i]);
    }

     e = n * (n + 1) / 2;
     a = 0;

    for (i = 0; i < n-1; i=i+1) {
        a = a + arr[i];
    }

    printf("The missing value = %d", e - a);
    return 0;
}
