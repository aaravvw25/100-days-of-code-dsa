#include <stdio.h>

int main()
{
    int r, c,i,j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i=i+1)
    {
        for(j = 0; j < c; j=j+1)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;

    
    for(i = 0; i < r && i < c; i=i+1)
    {
        sum = sum + a[i][i];
    }

    printf("Primary diagonal sum = %d\n", sum);

    return 0;
}
