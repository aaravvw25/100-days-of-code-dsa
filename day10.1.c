#include <stdio.h>
#include <string.h>
int main() {
    int len,i,r,l,ip=1;
    char s[200];
    printf("Enter a string:");
    fgets(s,sizeof(s),stdin);
    len=strlen(s);
    if (s[len-1] == '\n'){
        s[len-1]='\0';
        len=len-1;
    }
    l=0;
    r=len-1;
    while (l < r){
        if (s[l]!=s[r]){
            ip=0;
            break;
        }
        r=r-1;
        l=l+1;
        
    }
    if (ip){
        printf("'%s' is pallendrom\n",s);
    }
    else{
        printf("'%s' is not a pallendrom\n",s);
        return 0;
    }
    
}
