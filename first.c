#include<stdio.h>
int main()
{
	int a[4]={12,34,54,45};
	int *p=a;
	printf("1st element:- %d\n",*p);
	p++;
	printf("2nd element :-%d\n",*p);
	p++;
	printf("3rd element :-%d\n",*p);
	p++;
	print("4th element :-%d\n",*p);
	printf("adderss of the 1st element:-%p\n",p);
	printf("adderss of the 2nd element:-%p\n",p);
	printf("adderss of the 3rd element:-%p\n",p);

	printf("adders of the 4th element:-%p\n",p);
=======
	printf("adderss of the a :-%p\n",a[4]);
	printf("adderss of the p :-%p\n",p);
	return 0;
}
>>>>>>> feature


