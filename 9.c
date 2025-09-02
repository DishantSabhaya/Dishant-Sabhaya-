#include<stdio.h>
int main()
{
    float dollars,rupees;
    float rate = 48.0;
    printf("enter amount in rupees : ");
    scanf("%f",&rupees);
    dollars=rupees/rate;
    printf("%f rupees = %f dollars",rupees,dollars);
}
