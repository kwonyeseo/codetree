#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}