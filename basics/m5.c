/*
	Write a c program to to find area & perimeter of a rectangle having lenght 
	l & breadth B 
*/

#include<stdio.h>
int main()
{
	float l,b;
	
	printf("\n Enter Lenght : ");
	scanf("%f",&l);
	printf("\n Enter Breadth : ");
	scanf("%f",&b);
	
	printf("\n Area of rectangle : %0.2f",(float)l*b);
	printf("\n Perimeter of rectangle : %0.2f",(float)2*(l+b));
}
