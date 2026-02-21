/*
Monthly Expenses q2
 Raunak Kumar Singh -24071246
*/
#include <stdio.h>
int main(){
    float food_expenses,leisure_expenses,clothes_expenses,total_cost;

    food_expenses=510.0;
    leisure_expenses=340.0;
    clothes_expenses=120.0;

    total_cost=food_expenses+leisure_expenses+clothes_expenses;
    printf("Total monthly expenses: %.2f\n", total_cost);
    return 0;
}