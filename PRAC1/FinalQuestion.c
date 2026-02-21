/*
Final Question - Monthly Expenses
 Raunak Kumar Singh -24071246
*/
#include <stdio.h>

int main() {
    const int accommodation = 500;
    
    float food, leisure, clothes, travel;
    float total_cost;

    printf("Enter food expenses: ");
    scanf("%f", &food);

    while (food < 0) { 
        printf("Invalid value entered. \nPlease enter a positive amount: ");
        scanf("%f", &food);
    }

    printf("Enter leisure expenses: ");
    scanf("%f", &leisure);

    while (leisure < 0) {
        printf("Invalid value entered. \nPlease enter a positive amount: ");
        scanf("%f", &leisure);

    }

    printf("Enter clothes expenses: ");
    scanf("%f", &clothes);

    while (clothes < 0) {
        printf("Invalid value entered. \nPlease enter a positive amount: ");
        scanf("%f", &clothes);

    }
    printf("Enter travel expenses: ");
    scanf("%f", &travel);
    while (travel < 0) {
        printf("Invalid value entered. \nPlease enter a positive amount: ");
        scanf("%f", &travel);

    }
    total_cost = food + leisure + clothes + travel + accommodation;

    printf("\nTotal monthly expenditure is $%.2f\n", total_cost);
    return 0;
}