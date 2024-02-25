#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define N 1000

int main(void) {
    int a, b, c;

    for (a = 1; a < N; a++) {
        for (b = 1; b < N; b++) { // ξεκινήστε από a + 1 για να αποφύγετε διπλές επαναλήψεις
            c = N - a - b;
            if ((a * a + b * b == c * c)) {
                printf("\na = %d, b = %d, c = %d\n", a, b, c);
                printf("Product abc = %d\n", a * b * c); // εκτυπώνει το γινόμενο abc
                return 0; 
            }
        }
    }

    printf("No solution found.\n");
    return 0;
}
