#include <stdio.h>
#include <stdlib.h>

#define NUMBERS_COUNT 100
#define NUMBER_LENGTH 50

int main() {
    int numbers[NUMBERS_COUNT][NUMBER_LENGTH]; // 2D array to store digits
    int sum[NUMBER_LENGTH] = {0}; // Array to store the sum, initialized to zero

    // Read numbers
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        for (int j = 0; j < NUMBER_LENGTH; j++) {
            char digit;
            scanf(" %c", &digit); // Read each digit individually
            numbers[i][j] = digit - '0'; // Convert char to integer
        }
    }

    // Perform addition
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        for (int j = NUMBER_LENGTH - 1; j >= 0; j--) {
            sum[j] += numbers[i][j]; // Add each digit to the sum
            if (sum[j] >= 10 && j > 0) { // Handle carry
                sum[j - 1] += sum[j] / 10;
                sum[j] %= 10;
            }
        }
    }

    
    printf("The first  digits of the sum are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d", sum[i]);
    }
    printf("\n");

    return 0;
}

