#include <stdio.h>

int main()
{
    int n,i,c,j;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i=i+1)
        scanf("%d", &a[i]);

    int v[n];
    for(i = 0; i < n; i=i+1)
        v[i] = 0;

    for(i = 0; i < n; i=i+1)
    {
        if(v[i] == 1)
            continue;

         c = 1;

        for(j = i + 1; j < n; j=j+1)
        {
            if(a[i] == a[j])
            {
                c=c+1;
                v[j] = 1;
            }
        }

        printf("%d occurs %d times\n", a[i], c);
    }

    return 0;
}
