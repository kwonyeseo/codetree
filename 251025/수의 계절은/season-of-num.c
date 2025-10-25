#include <stdio.h>

int main() {
    // Please write your code here.
    int m;
    scanf("%d", &m);

    if (3 <= m && m <= 5) {
        printf("Spring");
    }else if (6 <= m && m <= 8) {
        printf("Summer");
    }else if (9 <= m && m <= 11) {
        printf("Fall");
    }else {
        printf("Winter");
    }
    return 0;
}