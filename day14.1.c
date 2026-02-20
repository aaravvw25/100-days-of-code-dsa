#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter order of square matrix: ");
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

    int id = 1;

    for(i = 0; i < n; i=i+1)
    {
        for(j = 0; j < n; j=j+1)
        {
            if(i == j && a[i][j] != 1)
                id = 0;

            if(i != j && a[i][j] != 0)
                id = 0;
        }
    }

    if(id)
        printf("Identity Matrix\n");
    else
        printf("Not an Identity Matrix\n");

    return 0;
}
