#include <stdio.h>

int checkPrimeNumber(int n) {
  int j, flag = 1;

  for (j = 2; j <= n / 2; ++j) {

    if (n % j == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}

int main(void){

    int c = 0, flag;

    for(int d = 2; d < 1000000; d++){
        if(checkPrimeNumber(d)){
            c++;
        }
        if(c == 10001){
            printf("\nThe 10001st prime number is %d\n",d);
            break;
        }
    }
    
    return 0;
}
