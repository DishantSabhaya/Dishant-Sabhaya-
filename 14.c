#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("\nEnter the Temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9.0/5.0 * celsius) + 32;
    printf("\nTemperature in Fahrenheit: %.2f\n", fahrenheit);
}
