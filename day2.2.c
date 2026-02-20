#include<stdio.h>
int main() {
int n ,i,mip,map;
scanf("%d",&n);
int a[n];
printf("Enter arrayelements:\n");
for (i=0;i<n;i=i+1){
    scanf("%d",&a[i]);
}
mip=a[0];
map=0;
for (i=1;i<n;i=i+1){
    if (a[i]<mip){
        mip=a[i];
    }
    else if(a[i]-mip>map){
        map=a[i]-mip;
    }
    }
    printf("%d",map);
    return 0;

}
