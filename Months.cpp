#include<stdio.h>

int main()
{
	int n;
	printf("Enter the month number ");
	scanf("%d",&n);
	if (n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
	{printf("Number of days : 31Days");
	}
	if (n==4 || n==6 || n==9 || n==11)
	{printf("Number of days : 30 Days");
	}
	if (n==2)
	{printf("Number of days : 28/29 Days");
	}
}
