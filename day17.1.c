#include <stdio.h>

int main()
{
    int n,i,ma,mi;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i=i+1)
        scanf("%d", &a[i]);

    mi = a[0];
    ma = a[0];

    for(i = 1; i < n; i=i+1)
    {
        if(a[i] > ma)
            ma = a[i];

        if(a[i] < mi)
            mi = a[i];
    }

    printf("Maximum = %d\n", ma);
    printf("Minimum = %d\n", mi);

    return 0;
}
