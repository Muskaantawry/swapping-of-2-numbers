#include<stdio.h>
int main()
{
	int a,b;
	printf ("enter the values of a and b");
	scanf("%d %d", &a, &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a after interchanging is : %d ",a);
	printf("the value of b after interchanging is : %d ",b);
	return 0;
}
