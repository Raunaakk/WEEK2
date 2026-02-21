/*
Monthly Expenses q3
 Raunak Kumar Singh -24071246
*/
#include <stdio.h>
int main() {
    float food_expenses,leisure_expenses,clothes_expenses,accommodation_expenses,travel_expenses,total_cost;

    food_expenses=250.0;
    leisure_expenses=120.0;
    clothes_expenses=80.0;
    accommodation_expenses=500.0;
    travel_expenses=60.0;

    total_cost=food_expenses+leisure_expenses+clothes_expenses+accommodation_expenses+travel_expenses;
    printf("Total monthly expenses: %.2f\n", total_cost);
    return 0;
}