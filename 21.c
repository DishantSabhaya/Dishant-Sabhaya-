#include<stdio.h>
int main()
{
    float grossSales, discount,netSales;
    printf("enter gross sales: ");
    scanf("%f",&grossSales);
    discount=0.10*grossSales;
    netSales=grossSales-discount;
    printf("Net sales = %f",netSales);
}
