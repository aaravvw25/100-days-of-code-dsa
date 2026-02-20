#include <stdio.h>

int main()
{
    int n, k,i,j,s,e,t;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i=i+1)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if(n == 0) 
    {
        return 0;
}
    k = k % n;

    s = 0, e = n - 1;
    while(s < e)
    {
        t = a[s];
        a[s] = a[e];
        a[e] = t;
        s=s+1;
        e=e-1;
    }

    
    s = 0;
    e= k - 1;
    while(s < e)
    {
        t = a[s];
        a[s] = a[e];
        a[e] = t;
        s=s+1;
        e=e-1;
    }

  
    s = k;
    e= n - 1;
    while(s < e)
    {
        t = a[s];
        a[s] = a[e];
        a[e] = t;
        s=s+1;
        e=e-1;
    }

    printf("Rotated array:\n");
    for(i = 0; i < n; i=i+1)
        printf("%d ", a[i]);

    return 0;
}
