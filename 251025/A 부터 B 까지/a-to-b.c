#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);

    while (1) {
        printf("%d ", a);
        if (a % 2 == 1) {
            a *= 2;
        }else {
            a += 3;
        }
        if (a > b) {
            break;
        }
    }
    
    return 0;
}