#include <stdio.h>

int main() {
    int a = 1;
    while(1) {
        scanf("%d", &a);
        if (a == 0) {
            break;
        }
        printf("%d\n", a);
    }
    return 0;
}