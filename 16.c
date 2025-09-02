#include <stdio.h>
int main()
{
 int n;
 float p, r, I;
 printf(" Enter Amount p :");
 scanf("%f",&p);
 printf(" Enter Rate r :");
 scanf("%f",&r);
 printf(" Enter No of Years n :");
 scanf("%d",&n);
 I = (p*r*n)/100;
 printf(" Interest = %.f",I);
}
