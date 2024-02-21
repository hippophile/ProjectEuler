#include <stdio.h>

// Function to calculate the nth triangle number
int triangleNumber(int n) {
    return n * (n + 1) / 2;
}

// Function to calculate the number of divisors for a given number
int numOfDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            // If divisors are equal, count only one
            if (n / i == i) {
                count++;
            } else { // Otherwise, count both
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    int n = 1;
    int triangle = 1;

    // Iterate until finding the first triangle number with over 500 divisors
    while (numOfDivisors(triangle) <= 500) {
        n++;
        triangle = triangleNumber(n);
    }

    printf("The first triangle number to have over five hundred divisors is: %d\n", triangle);

    return 0;
}
