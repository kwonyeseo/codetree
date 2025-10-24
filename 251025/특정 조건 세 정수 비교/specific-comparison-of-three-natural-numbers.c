#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && c >= b) {
        printf("%d ", a == b);
    }else if (a >= c && b >= c) {
        printf("%d ", a == c);
    }else {
        printf("%d ", 1);
    }

    printf("%d", a == b && b == c);
    return 0;
}