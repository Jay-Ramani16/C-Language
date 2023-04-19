#include<stdio.h>
main()
{
	float p,r,t;
    float interest;
	  
	printf("Enter the principle value:");
	scanf("%f",&p);
	
	printf("Enter the rate:");
	scanf("%f",&r);
	
	printf("Enter the time interval:");
	scanf("%f",&t);
	
	interest=(p*r*t)/100;
	
	printf("Simple interest=%0.3f",interest);
	
	
}