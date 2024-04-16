#include <stdio.h>
#include <math.h>

#define MAX 4000000

int main(){

 int n1 = 0;
 int n2 = 1;
 int next = 0;
 int sum = 0;
     while (next <= MAX){
 //printf("%d,\n ", next);
     n1 = n2;
     n2 = next;
     next = n1 + n2;
     if (next % 2 == 0 ){
         sum += next;
      }
    }
    printf("%d\n",sum);
return 0;
}