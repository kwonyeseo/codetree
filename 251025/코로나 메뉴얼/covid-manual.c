#include <stdio.h>

int main() {
    // Please write your code here.
    char v[3];
    int t[3];
    int A = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%c %d ", &v[i], &t[i]);
    }
    for (int i = 0; i < 3; i++) {
        if (v[i] == 'Y' && t[i] >= 37) {
            A++;
        }
    }

    printf("%c", A >= 2 ? 'E' : 'N');
    return 0;
}