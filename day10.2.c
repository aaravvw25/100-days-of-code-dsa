#include <stdio.h>

int main() {
    int n1, n2,i,j,t;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];

    printf("Enter elements:\n");
    for(i = 0; i < n1; i=i+1) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];

    printf("Enter elements:\n");
    for(i = 0; i < n2; i=i+1) {
        scanf("%d", &b[i]);
    }
    
    for(i = 0; i < n1-1; i=i+1) {
        for(j = 0; j < n1-1-i; j=j+1) {
            if(a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

   
    for(i = 0; i < n2-1; i=i+1) {
        for(j = 0; j < n2-1-i; j=j+1) {
            if(b[j] > b[j+1]) {
                t = b[j];
                b[j] = b[j+1];
                b[j+1] = t;
            }
        }
    }

   
    i = 0, j = 0;
    printf("Intersection: ");

    while(i < n1 && j < n2) {
        if(a[i] == b[j]) {
            printf("%d ", a[i]);
            i=i+1;
            j=j+1;
        }
        else if(a[i] < b[j]) {
            i=i+1;
        } else {
            j=j+1;
        }
    }

    return 0;
}
