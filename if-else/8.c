#include<stdio.h>
int main()
{
	int profit,sp,cp;
	
	printf("\n Enter Cost Price : ");
	scanf("%d",&cp);
	
	printf("\n Enter selling Price : ");
	scanf("%d",&sp);

	if(cp<sp)
	{
		printf("\n The Profit of= %d rs",sp-cp);
	}
	
	else if(sp<cp)
	{
		printf("\n Loss of= %d rs",cp-sp);
	}
	
	else
	{
		printf("\n Neither Loss Nor Profit");
	}
	
	return 0;
}
