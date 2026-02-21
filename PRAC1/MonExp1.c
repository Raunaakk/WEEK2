/*Monthly Expenses q1
 Raunak Kumar Singh -24071246
*/
#include <stdio.h>
int main() {
    float food_expenses,leisure_expenses,clothes_expenses,total_cost;

    food_expenses=300.0;
    leisure_expenses=100.0;
    clothes_expenses=50.0;

    total_cost=food_expenses+leisure_expenses+clothes_expenses;
    printf("Total monthly expenses: %.2f\n", total_cost);
    return 0;
}