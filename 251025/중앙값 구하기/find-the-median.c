#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && b > c) || (a < b && b < c)) {
        printf("%d", b);
    }else if ((a > c && c > b) || (a < c && c < b)) {
        printf("%d", c);
    }else if ((b > a && a > c) || (b < a && a < c)) {
        printf("%d", a);
    }
    return 0;
}