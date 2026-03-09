#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int c = n;

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < c; i++) {
            printf("* ");
        }
        c--;
        printf("\n");
    }
    return 0;
}