/*
	Write a c program to find area & perimeter of the circle of gievn radius 
*/

#include<stdio.h>
int main()
{
	float r;
	
	printf("\n Enter Radius : ");
	scanf("%f",&r);
	
	printf("\n Area of the circle      : %0.2f",(float)3.14*r*r);
	printf("\n Perimeter of the circle : %0.2f",(float)2*3.14*r);
}
