#include <stdio.h>
#include <conio.h>
void main()
{
	float BMI, weight,height,x,x1;
	printf("Enter your weight(kg) and height(m): ");
	scanf("%f%f",&weight,&height);
	BMI=weight/(height*height);
	x=18*height*height;
	x1=23*height*height;
	if (BMI<18)
		printf("Underweight");
	else if (BMI>=18 && BMI<=24)
		printf("Healthy");
	else if (BMI>24 && BMI<=30)
		printf ("Overweight");
	else if (BMI>30 && BMI<=39)
		printf("Obese");
	else if (BMI>39) 
		printf("Extremely obese");
	if (BMI<18 ||BMI>24)
	printf("\nRecommended weight is %.2g-%.2g(kg)",x,x1);
	getch();
}