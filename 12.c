#include<stdio.h>
int main()
{
	float grams,kilograms;
    printf("Please enter kilograms:");
	scanf("%f", &kilograms);
	grams = kilograms * 1000;
	printf("%f grams", grams);
}
