#include <stdio.h>

int main() {
    int n,i,j,l,r,ms,s,as,asM,ml,mr,temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i=i+1) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 0; i < n - 1; i=i+1) {
        for (j = 0; j < n - i - 1; j=j+1) {
            if (arr[j] > arr[j + 1]) {
                  temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    l = 0;
    r = n - 1;

    ms = arr[l] + arr[r];
    ml = l;
    mr = r;

    while (l < r) {
        s = arr[l] + arr[r];

    if (s < 0){
        as = -s;
    
    }
    else  {
        as = s;
}
    if (ms < 0){
        asM = -ms;
    }
    else{
        asM = ms;
    }
        if (as < asM) {
            ms = s;
            ml = l;
            mr = r;
        }

        if (s < 0)
            l=l+1;
        else
            r=r-1;
    }

    printf("Two elements whose sum is closest to zero are: %d and %d\n",
           arr[ml], arr[mr]);
    printf("Sum = %d\n", ms);

    return 0;
}
