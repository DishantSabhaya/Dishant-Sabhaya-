#include<stdio.h>
int main()
{
    float dollars,rupees,pounds;
    float dollartorupee = 48.0;
    float poundtorupee = 70.0;
    printf("enter amount in dollars : ");
    scanf("%f",&dollars);
    rupees=dollars*dollartorupee;
    pounds=rupees/poundtorupee;
    printf("%f dollars = %f pounds",dollars,pounds);
}
