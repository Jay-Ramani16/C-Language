#include<stdio.h>
main()
{
	float h,b;
    float area;
	  
	printf("Enter the height:");
	scanf("%f",&h);
	
	printf("Enter the breadth:");
	scanf("%f",&b);
	
	area=(h*b)/2;
	
	printf("Area of triangle=%0.2f",area);
	
	
}