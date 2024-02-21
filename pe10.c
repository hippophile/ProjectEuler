#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n <= 1) return false;

    int i;
    int limit = sqrt(n);

    for (i = 2; i <= limit; ++i) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int N = 2000000;
    int i;
    unsigned long long sum = 0; // Χρησιμοποιούμε unsigned long long για μεγαλύτερο εύρος

    printf("The sum of all the primes below two million is:\n");
    for (i = 2; i < N; ++i) { // Ξεκινάμε από το 2
        if (isPrime(i)) {
            sum += i;
        }
    }
    printf("%llu\n", sum); // Τύπωση με %llu για unsigned long long

    return 0;
}
