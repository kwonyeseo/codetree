#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int k = 0; k < i; k++) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}