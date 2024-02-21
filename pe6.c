#include <stdio.h>

unsigned long long SumSquareDiff(unsigned int n) {
  unsigned long long SumOfSquares = 0;
  unsigned long long SquareOfSums = 0;

  for (unsigned int i = 1; i <= n; i++) {
    SumOfSquares += (unsigned long long)i * i;
    SquareOfSums += i;
  }

  SquareOfSums = (unsigned long long)SquareOfSums * SquareOfSums;

  unsigned long long difference = SquareOfSums - SumOfSquares;

  return difference;
}

int main() {
  unsigned long long result = SumSquareDiff(100);
  printf("%llu\n", result);
  return 0;
}