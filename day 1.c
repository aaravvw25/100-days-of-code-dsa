#include<stdio.h>
int main(){
    int n,i,j,te;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("nums = ");
    for (i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    printf("target = ");
    scanf("%d",&te);
    for (i=0;i<n;i=i+1){
        for (j=i+1;j<n;j=j+1){
            if (arr[i]+arr[j]==te){
                printf("%d %d\n",i,j);
                return 0;
            }
        }
    }
    return 0;
}
