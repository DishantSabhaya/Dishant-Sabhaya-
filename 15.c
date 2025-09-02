#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("\nEnter the Temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = 5.0/9.0 * (fahrenheit - 32);
    printf("\nTemperature in celsius: %.f\n", celsius);
}
