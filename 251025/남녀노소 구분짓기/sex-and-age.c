#include <stdio.h>

int main() {
    // Please write your code here.
    int s, a;
    scanf("%d %d", &s, &a);

    if (s == 0) {
        if (a >= 19) {
            printf("MAN");
        }else {
            printf("BOY");
        }
    }else {
        if (a >= 19) {
            printf("WOMAN");
        }else {
            printf("GIRL");
        }
    }
    return 0;
}