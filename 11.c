#include<stdio.h>
int main()
{
	float grams,kilograms;
    printf("Please enter grams:");
	scanf("%f", &grams);
	kilograms = grams / 1000;
	printf("%f Kilograms", kilograms);
}
