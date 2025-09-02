#include<stdio.h>
int main()
{
    float dollars,rupees;
    float rate = 48.0;
    printf("enter amount in dollars : ");
    scanf("%f",&dollars);
    rupees=dollars*rate;
    printf("%f dollars = %f rupees",dollars,rupees);
}
