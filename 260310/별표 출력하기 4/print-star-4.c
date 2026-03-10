#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int k = 0; k < i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}