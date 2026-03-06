#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int m = n;
    for (int i = 1; i <= n; i++) {
        m /= i;
        if (m <= 1) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}