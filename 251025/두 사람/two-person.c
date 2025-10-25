#include <stdio.h>

int main() {
    // Please write your code here.
    int a1, a2;
    char s1, s2;
    scanf("%d %c %d %c", &a1, &s1, &a2, &s2);

    printf("%d", (a1 >= 19 && s1 == 'M') || (a2 >= 19 && s2 == 'M'));
    return 0;
}