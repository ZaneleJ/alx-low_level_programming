#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
	    if (month > 2)
	    {
		    day++;
	    }
    }

    int days_in_year = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 366 : 365;
    int remaining_days = days_in_year - convert_day(month, day);

    printf("Remaining days in the year: %d\n", remaining_days);
}

int main(void)
{
    int month = 4;
    int day = 1;
    int year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return 0;
}
