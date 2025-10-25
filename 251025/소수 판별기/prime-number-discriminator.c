#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("C");
            return 0;
        }
    }
    printf("P");
    return 0;
}