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
	printf("adderss of the 1st element:-%p\n",p);
	printf("adderss of the 2nd element:-%p\n",p);
	printf("adderss of the 3rd element:-%p\n",p):


