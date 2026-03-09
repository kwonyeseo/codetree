#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool satisfied = false;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n % 3 != 0) {
            satisfied = true;
        }
    }
    if (satisfied == true) {
        printf("0");
    }else {
        printf("1");
    }
    return 0;
}