#include <stdio.h>

int main()
{
    int n,i,j,l,r,temp;
    printf("Enter size n: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i=i+1)
    {
        for(j = 0; j < n; j=j+1)
        {
            scanf("%d", &a[i][j]);
        }
    }

   
    for(i = 0; i < n; i=i+1)
    {
        for(j = i + 1; j < n; j=j+1)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    
    for(i = 0; i < n; i++)
    {
         l = 0, r = n - 1;
        while(l < r)
        {
            temp = a[i][l];
            a[i][l] = a[i][r];
            a[i][r] = temp;
            l=l+1;
            r=r-1;
        }
    }

    
    printf("Rotated matrix:\n");
    for(i = 0; i < n; i=i+1)
    {
        for(j = 0; j < n; j=j+1)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
