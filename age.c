#include <stdio.h>
#include <conio.h>

int main(){
    int year,month,day,year1,day1,month1,year2,month2,day2;

    printf("Please enter your date of birth (Day/Month/Year):");
    scanf("%d/%d/%d", &day1, &month1, &year1);

    printf("Please enter today's date (Day/Month/Year):");
    scanf("%d/%d/%d", &day2, &month2, &year2);

    if(day1>day2) {
        day2=day2+30;
        month2=month2-1;
    }

    if(month1>month2) {
        month2=month2+12;
        year2=year2-1;
    }

    day=day2-day1;
    month=month2-month1;
    year=year2-year1;

    printf("\nYou are %d days, %d months, %d years old.\n", day, month, year);

    return 0;
}
