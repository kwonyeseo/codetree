#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d.", a / b);
    a %= b;

    for (int i = 0; i < 20; i++) {
        if (a / b == 0) {
            a *= 10;
            printf("%d", a / b);
            a %= b;
        }else {
            printf("%d", a / b);
            a %= b;
        }
    }
    return 0;
}