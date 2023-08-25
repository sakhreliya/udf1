#include<stdio.h>

int cube(int n)
{
	int sum;
    sum=n*n*n;
}

int main()
{
    int n;
    printf("enter value :");
    scanf("%d",&n);
    printf("%d",cube(n));
}
