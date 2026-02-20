#include <stdio.h>

int main() {
    int r, c,i,j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i=i+1) {
        for(j = 0; j < c; j=j+1) {
            scanf("%d", &a[i][j]);
        }
    }

    int t= 0, b= r - 1;
    int l= 0, r= c - 1;

    printf("Spiral order:\n");

    while (top <= bottom && left <= right) {

       
        for (j = left; j <= right; j=j+1)
            printf("%d ", a[top][j]);
        t=t+1;

       
        for (i = top; i <= bottom; i=i+1)
            printf("%d ", a[i][right]);
        r=r-1;

        
        if (top <= bottom) {
            for (j = right; j >= left; j=j-1)
                printf("%d ", a[bottom][j]);
            b=b-1;
        }

       
        if (left <= right) {
            for (i = bottom; i >= top; i=i-1)
                printf("%d ", a[i][left]);
            l=l+1;
        }
    }

    return 0;
}
