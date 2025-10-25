#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            printf("%d ", 0);
        }else if ((i / 10) != 0 && (i / 10) % 3 == 0) {
            printf("%d ", 0);
        }else if ((i % 10) != 0 && (i % 10) % 3 == 0) {
            printf("%d ", 0);
        }else {
            printf("%d ", i);
        }
    }
    return 0;
}