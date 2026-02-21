/*The U.S. Census Bureau projects population based on the following assumptions:
•	One birth every 7 seconds
•	One death every 13 seconds
•	One new immigrant every 45 seconds
Write a program to display the population for each of the next five years. Assume the current population is 312,032,486 and one year has 365 days.
@Raunak Kumar Singh -24071246
*/

#include <stdio.h>

int main(){
    const int Current_Population=312032486;
    const int Days_per_year=365;

    int Total_Seconds=Days_per_year*24*60*60;
    double birth_per_year=Total_Seconds/7.0;
    double death_per_year=Total_Seconds/13.0;
    double immigrant_per_year=Total_Seconds/45.0;

    double Net_Change=birth_per_year+immigrant_per_year-death_per_year;
    double Population=Current_Population;

    printf("Population for next 5 years:\n");

    for (int i= 1;i <=5;i++)
    {
        Population=Population + Net_Change;
        printf("year %d: %.0f\n",i,Population);
    }

    return 0;
}
