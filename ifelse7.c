//Check whether the given year is leap year or not

#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0 && (year%100!=0 || year%400==0))
	{
		printf("It is leap year");
	}
	else
	{
		printf("It is not leap year");
	}
}
