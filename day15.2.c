#include <stdio.h>

int main()
{
    int m, n,i,j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i=i+1)
        for(j = 0; j < n; j=j+1)
            scanf("%d", &a[i][j]);

    int frz = 0;
    int fcz = 0;

   
    for(j = 0; j < n; j=j+1)
        if(a[0][j] == 0)
            frz= 1;

   
    for(i = 0; i < m; i=i+1)
        if(a[i][0] == 0)
            fcz = 1;

    for(i = 1; i < m; i=i+1)
    {
        for(j = 1; j < n; j=j+1)
        {
            if(a[i][j] == 0)
            {
                a[i][0] = 0;
                a[0][j] = 0;
            }
        }
    }

   
    for(i = 1; i < m; i=i+1)
    {
        for(j = 1; j < n; j=j+1)
        {
            if(a[i][0] == 0 || a[0][j] == 0)
                a[i][j] = 0;
        }
    }


    if(frz)
        for(j = 0; j < n; j=j+1)
            a[0][j] = 0;

   
    if(fcz)
        for(i = 0; i < m; i=i+1)
            a[i][0] = 0;

   
    printf("Updated matrix:\n");
    for(i = 0; i < m; i=i+1)
    {
        for(j = 0; j < n; j=j+1)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
