#include <stdio.h>

int main() {
    // Please write your code here.
    int n; int y = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0) {
            if (i % 100 == 0) {
                if (i % 400 != 0) {
                    continue;
                }else {
                    y++;
                }
            }else {
                y++;
            }
        }else {
            continue;
        }
    }
    printf("%d", y);
    return 0;
}