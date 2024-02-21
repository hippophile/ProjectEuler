#include <stdio.h>

int is_palindrome(int n) {
    int reversed = 0;
    int original = n;

    while (n != 0) {
        int r = n % 10;
        reversed = reversed * 10 + r;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int largest_palindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    printf("The largest palindrome made from the product of two 3-digit numbers is: %d\n", largest_palindrome);

    return 0;
}