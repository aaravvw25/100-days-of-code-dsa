#include <stdio.h>

int main() {
    int m, n,i,j,k,x;

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    int nums1[m+n], nums2[n];

    printf("Enter %d sorted elements of nums1:\n", m);
    for(int i = 0; i < m; i=i+1)
        scanf("%d", &nums1[i]);

    printf("Enter %d sorted elements of nums2:\n", n);
    for(i = 0; i < n; i=i+1)
        scanf("%d", &nums2[i]);

   i = m-1;
   j = n-1;
   k = m+n-1;

    while(i >= 0 && j >= 0) {
        if(nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i=i-1;
        } else {
            nums1[k] = nums2[j];
            j=j-1;
        }
        k=k-1;
    }

   
    while(j >= 0) {
        nums1[k] = nums2[j];
        j=j-1;
        k=k-1;
    }

    printf("Merged array:\n");
    for(x = 0; x < m+n; x=x+1)
        printf("%d ", nums1[x]);

    return 0;
}
