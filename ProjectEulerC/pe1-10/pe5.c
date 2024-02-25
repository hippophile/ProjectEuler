#include <stdio.h>

int main() {
    int count = 2519;
    int max = 0;
    int i = 1;

    while (max != 1) {
        if (count % i == 0) {
            i++;
            if (i == 22) {  // When i reaches 22, all values from 1 to 21 have divided evenly
                max = 1;     // Update max to break the loop
            }
        } else {
            count++;
            i = 1; // Reset i to 1 when count is incremented
        }
    }

    if (max == 1) {
        printf("%d\n", count);
    }

    return 0;
}