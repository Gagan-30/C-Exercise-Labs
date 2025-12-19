#include <stdio.h>
#define N 10

int main() {
    int i = 0;
    int sum = 0;
    while (i < N - 1) {
        if (i % 2 == 1) {
            sum = sum + i;
            printf("%d + ", i);
        }
        i++;
    }
    sum = sum + i;
    printf("%d = %d\n", i, sum);
}