#include <stdio.h>
int main() {
int a, b, c1,c2,c3,c4;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
c1=a+b;
printf("%d + %d = %d", a, b, c1);
c2=a-b;
printf("%d - %d = %d", a, b, c2);
c3=a*b;
printf("%d * %d = %d", a, b, c3);
c4=a/b;
printf("%d / %d = %d", a, b, c4);
}
