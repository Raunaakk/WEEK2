/*
Monthly Expenses q4
 Raunak Kumar Singh -24071246
*/
#include <stdio.h>
int main() {

    float food_Expenses;
    float leisure_Expenses;
    float clothes_Expenses;
    float accommodation_Expenses;
    float travel_Expenses;
    float total_cost;

    printf("Enter food expenses: ");
    scanf("%f", &food_Expenses);

    printf("Enter leisure expenses: ");
    scanf("%f", &leisure_Expenses);

    printf("Enter clothes expenses: ");
    scanf("%f", &clothes_Expenses);

    printf("Enter accommodation expenses: ");
    scanf("%f", &accommodation_Expenses);

    printf("Enter travel expenses: ");
    scanf("%f", &travel_Expenses);

    total_cost = food_Expenses + leisure_Expenses + clothes_Expenses + accommodation_Expenses + travel_Expenses;

    printf("\nTotal monthly expenditure: $%.2f\n", total_cost);

    return 0;
}