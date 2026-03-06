#include <stdio.h>

int main() {
    int n;
    int t = 1;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        t *= i;
        if (t >= n) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}