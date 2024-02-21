#include <stdio.h>

#define N 600851475143

int main() {
  long long number = N;  // Use a separate variable to store N
  int MaxFactor = 0;
  int i = 2;

  while (i <= number) {
    if (number % i == 0) {
      MaxFactor = i;
      number /= i;
    } else {
      i++;
    }
  }

  printf("%d\n", MaxFactor);
  return 0;
}