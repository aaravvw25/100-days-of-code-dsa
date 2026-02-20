#include <stdio.h>

int main() {
    int n, i,temp;
    printf("Enter number of elements:");
    scanf("%d", &n);
int l = 0, r = n - 1;
    int arr[n];

    printf("Enter %d elements:\n",n);
    for(i = 0; i < n; i=i+1) {
        scanf("%d", &arr[i]);
    }
    while(l < r) {
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;

        l=l+1;
        r=r-1;
    }

    for(i = 0; i < n; i=i+1) {
        printf("%d ", arr[i]);
    }

    return 0;
}
