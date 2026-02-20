#include <stdio.h>

int main() {
    int n,i,k;
    printf("Enter number of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for( i = 0; i < n; i=i+1) {
        scanf("%d", &arr[i]);
    }

    if(n == 0) {
        return 0;
}
    k = 1;  

    for(i = 1; i < n; i=i+1) {
        if(arr[i] != arr[k-1]) {
            arr[k] = arr[i];
            k=k+1;
        }
    }

    for(i = 0; i < k; i=i+1) {
        printf("%d ", arr[i]);
    }

    return 0;
}
