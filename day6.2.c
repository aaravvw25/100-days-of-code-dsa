#include <stdio.h>

int main() {
    int n,i,k;

    printf("Enter size: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i=i+1) {
        scanf("%d", &nums[i]);
    }

    k = 0;

    
    for(i = 0; i < n; i=i+1) {
        if(nums[i] != 0) {
            nums[k] = nums[i];
            k=k+1;
        }
    }

    
    while(k < n) {
        nums[k] = 0;
        k=k+1;
    }

    printf("Array after moving zeros to end:\n");
    for(int i = 0; i < n; i=i+1) {
        printf("%d ", nums[i]);
    }

    return 0;
}
