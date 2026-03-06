#include <stdio.h>

int main() {
    int t;
    while (1) {
        scanf("%d", &t);
        if (t < 25) {
            printf("Higher\n");
        }else if (t > 25) {
            printf("Lower\n");
        }else {
            printf("Good\n");
            break;
        }
    }
    return 0;
}