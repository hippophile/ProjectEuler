#include <stdio.h>

int what_month(int year,int mo){
    if(mo == 1 || mo == 3 || mo == 5 || mo == 7 || mo == 8 || mo == 10 || mo == 12){
        return 1;
    }
    if(mo == 4 || mo == 6 || mo == 9 || mo == 11){
        return 2;
    }
    if((mo == 2)){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            return 4;
        }else return 3;
    }
}

int sunday(int day, int month, int year){
    int k = day;
    int c = year / 100;
    int y = year % 100;
       
}

int main(void){

int c;

    for(int year = 1901; year < 2000; year++){
        for(int month = 1; month <= 1; month++){

            if(what_month(year,month) == 1){
                for(int day = 1; day <= 30; day++){

                }
            }else if(what_month(year,month) == 2){
                for(int day = 1; day <= 31; day++){

                }
            }else if(what_month(year,month) == 3){
                for(int day = 1; day <= 28; day++){

                }
            }else if(what_month(year,month) == 4){
                for(int day = 1; day <= 29; day++){

                }
            }
        }
    }

    return 0;
}