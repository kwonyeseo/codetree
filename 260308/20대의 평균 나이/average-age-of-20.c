#include <stdio.h>

int main() {
    int age;
    int all = 0;
    int count = 0;
    while (1) {
        scanf("%d", &age);
        if (age / 10 == 2) {
            all += age;
            count++;
        }else {
            break;
        }   
    }
    printf("%.2f\n", (float)all / count);
    return 0;
}