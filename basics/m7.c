// Write a program to find the area of the triangle

#include<stdio.h>
int main()
{
	float b,h;
	
	printf("\n Enter Base : ");
	scanf("%f",&b);
	
	printf("\n Enter Height : ");
	scanf("%f",&h);
	
	printf("\n The Area of the Triangle : %0.2f",(float)0.5*b*h);
}
