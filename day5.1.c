#include <stdio.h>

int main() {
    int p,q,i,j,k,x;

    scanf("%d", &p);
    int a[p];
    for(i = 0; i < p; i=i+1)
        scanf("%d", &a[i]);

    scanf("%d", &q);
    int b[q];
    for(int i = 0; i < q; i=i+1)
        scanf("%d", &b[i]);

    int c[p + q];   

    i = 0, j = 0, k = 0;

    while(i < p && j < q) {
        if(a[i] <= b[j])
            c[k=k+1] = a[i=i+1];
        else
            c[k=k+1] = b[j=j+1];
    }

    while(i < p)
        c[k=k+1] = a[i=i+1];

    while(j < q)
        c[k=k+1] = b[j=j+1];

    printf("Merged chronological log:\n");
    for(x = 0; x < p + q; x=x+1)
        printf("%d ", c[x]);

    return 0;
}
