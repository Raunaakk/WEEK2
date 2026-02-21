/*  
    Compute the account value after 6 months of 
    monthly savings with monthly compound interest.
    @Raunak Kumar Singh -24071246
*/

#include <stdio.h>

int main() {
    double monthlySaving;
    const double PER_MONTH_INTEREST = 0.05 / 12.0;
    double grand_total = 0.0;

    printf("Enter monthly saving amount: ");
    scanf("%lf", &monthlySaving);

    for (int month = 1; month <= 6; month++) {
        grand_total = (monthlySaving + grand_total) * (1 + PER_MONTH_INTEREST);
    }

    printf("Account Total after 6 months: %.1f\n", grand_total);

    return 0;
}