#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int i = 3;
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", i);
        i += 3;
    }
    return 0;
}