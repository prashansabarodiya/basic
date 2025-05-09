#include<stdio.h>
int main()
{
	int a, *p;
	a= 100;
	p=&a;
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%d\n",*p);
	printf("%u\n",p);
	return 0;
}
