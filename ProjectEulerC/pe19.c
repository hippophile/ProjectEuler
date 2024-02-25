#include <stdio.h>

int what_month(int year, int mo) {
    int mo_days;

    if (mo == 1 || mo == 3 || mo == 5 || mo == 7 || mo == 8 || mo == 10 || mo == 12) {
        mo_days = 31;
    } else if (mo == 4 || mo == 6 || mo == 9 || mo == 11) {
        mo_days = 30;
    } else if (mo == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            mo_days = 29;
        } else {
            mo_days = 28;
        }
    }
    return mo_days;
}

int day_week(int year, int mo, int day0) {
    // Zeller's Congruence algorithm to calculate the day of the week
    if (mo < 3) {
        mo += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day0 + ((13 * (mo + 1)) / 5) + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    // h = 0 -> Saturday, h = 1 -> Sunday, ..., h = 6 -> Friday
    return h;
}

int main(void) {
    int c = 0;

    for (int year = 1901; year <= 2000; year++) {
        for (int mo = 1; mo <= 12; mo++) {
            int mo_days = what_month(year, mo);
            int day0 = day_week(year, mo, 1); // First day of the month
            if (day0 == 1) { // If it's a Sunday
                c++;
            }
        }
    }

    printf("\nThe number of Sundays that fell on the first day of the month during the twentieth century is %d\n", c);

    return 0;
}
