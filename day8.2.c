#include <stdio.h>

int isPowerOfTwo(int n) {
    if (n <= 0)
        return 0;

    while (n % 2 == 0)
        n /= 2;

    return n == 1;
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (isPowerOfTwo(n))
        printf("True - Power of Two");
    else
        printf("False - Not Power of Two");

    return 0;
}
