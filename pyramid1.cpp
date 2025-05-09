#include<stdio.h>
int main()
{
	int a,b,c;
	a=-1;
	b=6;
	while(a<9)
	{
		a=a+2;
		b=b-1;
		c=0;
		while(c<b)
		{
			c=c+1;
			printf(" ");
		}
		c=0;
		while (c<a)
		{c=c+1;
		  printf("1");
		}
		printf("\n");
	}
	return 0;
}
