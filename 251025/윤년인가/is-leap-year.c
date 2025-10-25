#include <stdio.h>

int main() {
    // Please write your code here.
    int y;
    scanf("%d", &y);

    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                printf("true");
            }else {
                printf("false");
            }
        }else {
            printf("true");
        }
    }else {
        printf("false");
    }
    return 0;
}