#include <stdio.h>

int main() {
    int m, n;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int toeplitz = 1;
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(a[i][j] != a[i-1][j-1]) {
                toeplitz = 0;
                break;
            }
        }
        if(!toeplitz) break;
    }

    if(toeplitz)
        printf("True — Matrix is Toeplitz\n");
    else
        printf("False — Matrix is NOT Toeplitz\n");

    return 0;
}
