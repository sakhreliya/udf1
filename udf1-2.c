#include<stdio.h>

void max(int n)
{
	if(n%3 == 0 && n%5 == 0)
	{
		printf("%d Number is divisble by 3 & 5 ",n);
	}
	else
	{
		printf("%d Number is not divisble by 3 & 5 ",n);
	}
}

main()
{
	int a;
	printf("Enter value A:");
	scanf("%d",&a);
	
	max(a);
}
