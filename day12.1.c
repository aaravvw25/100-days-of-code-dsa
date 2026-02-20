#include <stdio.h>

int main() {
    int n,i,j,s;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i=i+1) {
        for(int j = 0; j < n; j=j+1) {
            scanf("%d", &a[i][j]);
        }
    }
    s=1;
    
    for(i = 0; i < n; i=i+1) {
        for(j = 0; j < n; j=j+1) {
            if(a[i][j] != a[j][i]) {
                s = 0;
                break;
            }
        }
        if(s == 0)
            break;
    }

    if(s)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is NOT Symmetric\n");

    return 0;
}
