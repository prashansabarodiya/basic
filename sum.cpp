#include<stdio.h>
int main()
{
	int a ,i, b=0;
	for(i=1;i<5;i++)
	{
	
	printf("enter a value to get sum of it:\t");
	scanf("%d\n",&a);
		b = b+a;
    }
    printf("-----------\n");
    printf("%d",b);
    return 0;
}
