#include<stdio.h>
int main()
{
	int a[3]={12,34,54};
	int *p=a;
	printf("1st element:- %d\n",*p);
	p++;
	printf("2nd element :-%d\n",*p);
	p++;
	printf("3rd element :-%d\n",*p);


