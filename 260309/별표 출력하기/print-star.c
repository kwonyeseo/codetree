#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {
        for (int k = i; k > 0; k--) {
            printf("* ");
        }printf("\n");
    }
    return 0;
}