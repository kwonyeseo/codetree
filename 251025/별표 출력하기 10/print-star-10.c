#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n * 2; i++) {
        if (i % 2 == 0) {
            for (int k = 0; k < (i / 2) + 1; k++) {
                printf("* ");
            }
        }else {
            for (int k = n; k > (i / 2); k--) {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}