#include <stdio.h>

int main()
{
    int n,i,cs,ms;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i=i+1)
        scanf("%d", &a[i]);

     cs = a[0];
     ms  = a[0];

    for(i = 1; i < n; i=i+1)
    {
        if(cs + a[i] > a[i])
            cs = cs + a[i];
        else
            cs = a[i];

        if(cs > ms)
            ms = cs;
    }

    printf("Maximum subarray sum = %d\n", ms);

    return 0;
}
