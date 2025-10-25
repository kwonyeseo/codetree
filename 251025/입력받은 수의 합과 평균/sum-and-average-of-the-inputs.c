#include <stdio.h>

int main() {
    // Please write your code here.
    int n, k;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        sum += k;
    }
    printf("%d %.1f", sum, (double)sum / n);
    return 0;
}