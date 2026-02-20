#include <stdio.h>

int main()
{
    int n, k,i,j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;   

   
    for(i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

   
    for(i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    printf("Rotated Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
