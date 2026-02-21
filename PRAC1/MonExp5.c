/*
Monthly Expenses q5
 Raunak Kumar Singh -24071246
*/
#include <stdio.h>
int main() {
    const int accommodation = 500;
    float food_expenses, leisure_expenses, clothes_expenses, travel_expenses, total_cost;

    printf("Enter food expenses: ");
    scanf("%f", &food_expenses);

    printf("Enter leisure expenses: ");
    scanf("%f", &leisure_expenses);

    printf("Enter clothes expenses: ");
    scanf("%f", &clothes_expenses);

    printf("Enter travel expenses: ");
    scanf("%f", &travel_expenses);

    total_cost = food_expenses + leisure_expenses + clothes_expenses + accommodation + travel_expenses;

    printf("\nTotal monthly expenditure: $%.2f\n", total_cost);

    return 0;
}