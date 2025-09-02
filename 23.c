#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,total,average;
    printf("enter marks of sub1 :");
    scanf("%f",&sub1);
    printf("enter marks of sub2 :");
    scanf("%f",&sub2);
    printf("enter marks of sub3 :");
    scanf("%f",&sub3);
    total=sub1+sub2+sub3;
    average=total/3;
    printf("Total = %f",total);
    printf("\naverage = %f",average);
}
