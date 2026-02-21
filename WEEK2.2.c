/*Write a program that reads a Celsius degree in a double value from the console, then converts it to Fahrenheit and displays the result.
@Raunak Kumar Singh -24071246
*/

#include <stdio.h>

int main(){
    double Celsius;

    printf("Enter degree in Celsius:");
    scanf("%lf", &Celsius);

    double Fahrenheit = (Celsius * 9.0 / 5.0) + 32.0;

    printf("%.1f Celsius = %.1f Fahrenheit\n", Celsius, Fahrenheit);

    return 0;
}