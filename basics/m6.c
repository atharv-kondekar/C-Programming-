/*
	Write a c program to find area & volume of the sphere of given radius 
*/

#include<stdio.h>
int main()
{
	float r;
	
	printf("\n Enter Radius : ");
	scanf("%f",&r);
	
	printf("\n volume of Sphere   : %0.2f",(float)4/3*3.14*r*r*r);
	printf("\n Area of the Sphere : %0.2f",(float)4*3.14*r*r);
}
