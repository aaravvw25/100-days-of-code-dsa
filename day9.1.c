#include <stdio.h>
#include <string.h>

int main() {
    int c;
    printf("Enter number of characters: ");
    scanf("%d", &c);
    getchar();   

    char co[c + 1];
    int i, len;
    char temp;

    printf("Enter code name: ");
    fgets(co, sizeof(co), stdin);

   
    len = strlen(co);
    if(co[len-1] == '\n') {
        co[len-1] = '\0';
        len--;
    }

    for (i = 0; i < len / 2; i++) {
        temp = co[i];
        co[i] = co[len - 1 - i];
        co[len - 1 - i] = temp;
    }

    printf("Mirror format: %s", co);

    return 0;
}
