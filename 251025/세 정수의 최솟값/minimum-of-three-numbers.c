#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && c >= b) {
        printf("%d", b);
    }else if (a >= c && b >= c) {
        printf("%d", c);
    }else if (b >= a && c >= a) {
        printf("%d", a);
    }
    return 0;
}