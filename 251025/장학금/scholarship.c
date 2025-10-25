#include <stdio.h>

int main() {
    // Please write your code here.
    int m, f;
    scanf("%d %d", &m, &f);

    if (m >= 90) {
        if (f >= 95) {
            printf("100000");
        }else if (f >= 90) {
            printf("50000");
        }else {
            printf("0");
        }
    }else {
        printf("0");
    }
    return 0;
}