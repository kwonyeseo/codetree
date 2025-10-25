#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    for (int i = 1; i < 2 * n; i++) {
        if (i <= n) {
            for (int a = 0; a < (n - i); a++) {
                printf("  ");
            }
            for (int b = 0; b < i; b++) {
                printf ("@ ");
            }
        }else {
            for (int a = 0; a < 2 * n - i; a++) {
                printf("@ ");
            }
        }
        printf("\n");
    }
    return 0;
}