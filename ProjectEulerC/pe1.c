#include <stdio.h>

#define MAX 1000

int main() {
    int sum = 0;
    int i, k;

    for (i = 3; i < MAX; i += 3) {
        sum += i;
    }

    for (k = 5; k < MAX; k += 5) {
        if (!(k % 3 == 0)) {
            sum += k;
        }
    }

    printf("%d\n", sum);

    return 0;
}