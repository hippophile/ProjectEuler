#include <stdio.h>

unsigned long long binomialCoefficient(int n, int k) {
    if (k > n - k) {
        k = n - k;
    }

    unsigned long long result = 1;

    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int main() {
    int grid_size = 20;
    unsigned long long routes = binomialCoefficient(2 * grid_size, grid_size);
    printf("Number of routes through a %dx%d grid: %llu\n", grid_size, grid_size, routes);
    return 0;
}
