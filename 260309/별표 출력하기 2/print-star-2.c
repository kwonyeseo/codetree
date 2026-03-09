#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int k = n; k > 0; k--) {
        for (int i = 0; i < k; i++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}