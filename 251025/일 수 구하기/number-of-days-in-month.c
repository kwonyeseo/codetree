#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    if ((n <= 7 && n % 2 == 1) || (n >= 8 && n % 2 == 0)) {
        printf("31");
    }else {
        if (n == 2) {
            printf("28");
        }else {
            printf("30");
        }
    }
    return 0;
}