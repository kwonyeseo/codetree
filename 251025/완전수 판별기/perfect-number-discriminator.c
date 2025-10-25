#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int per = 0;
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            per += i;
        }
    }

    printf("%c", per == n ? 'P' : 'N');
    return 0;
}