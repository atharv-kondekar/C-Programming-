/*
	Write a c program that takes Roll no , Frist Name ,last Name ,Gender ,Percentage , Salary 
	of a person & display the information
*/

#include<stdio.h>
int main()
{
	int rn,s;
	float p;
	char fn[20],ln[20],g;
	
	printf("\n Enter Roll No : ");
	scanf("%d",&rn);
	printf("\n Enter Salary : ");
	scanf("%d",&s);
	
	printf("\n Enter Percenatge : ");
	scanf("%f",&p);
	
	printf("\n Enter frist name : ");
	scanf("%s",&fn);
	printf("\n Enter Last name : ");
	scanf("%s",&ln);
	
	printf("\n Enter Gender (M/F) : ");
	scanf("%c",&g);
	
	printf("\n Roll no 		: %d",rn);
	printf("\n Salary 		: %d",s);
	printf("\n Percentage 	: %0.2f",p);
	printf("\n Frist Name 	: %s",fn);
	printf("\n Last Name 	: %s",ln);
	printf("\n Gender 		: %c",g);
}
