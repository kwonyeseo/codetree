#include <stdio.h>

int main() {
    int n;
    int count = 0;
    while(count != 3) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            printf("%d\n", n / 2);
            count++;
        }
    }
    return 0;
}