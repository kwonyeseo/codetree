#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int c = 0; int s = 0; int t = 0;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i % 12 == 0) {
            t++;
        }else if (i % 3 == 0) {
            s++;
        }else if (i % 2 == 0) {
            c++;
        }
    }

    printf("%d %d %d", c, s, t);
    return 0;
}