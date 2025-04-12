/*
	Write a program to in c to accept tempeature in fahrenheit & convert it into
	celcuis
*/

#include<stdio.h>
int main()
{
	float t;
	
	printf("\n Enter Tempeature : ");
	scanf("%f",&t);
	
	printf("\n %0.2f",(float)5/9*(t-32));
}
