// Write a program to accept the age of the person & display the person is 
// elligible or not 

#include<stdio.h>
int main()
{
	int age;
	
	printf("\n Enter Age of the person : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n The Person is elligible for voting");
	}
	
	else
	{
		printf("\n The Person is not elligible for voting");
	}
	
	return 0;
}
