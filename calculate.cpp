#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("1.add\n2.sub\n3.mult\n4.div\n");
	printf("enter a\t ");
	scanf("%d",&a);
	printf("enter b\t");
	scanf("%d",&b);
	printf("enter your choice (1,2,,3,4)\n");
	scanf("%d",&c);
	if(c==1)
	{
	  d=a+b;
	   printf("%d",d);
	}
	if(c==2)
	{
		d=a-b;
		printf("%d",d);
	}
	if(c==3)
	{
		d=a*b;
		printf("%d",d);
	}
	if(c==4)
	{
		d=a/b;
		printf("%d",d);
	}
	return 0;
	
}
