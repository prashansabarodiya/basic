#include<stdio.h>
#define maxsize 10
int stack[maxsize];
int top= -1;
void push();                            //function
void pop();                             //function
void display();                        //function
void exit();                          //function
int main()                          //main function
{   int i;
    do 
    {
	
	    printf("--------stack programm--------\n");
	    printf("enter 1 for push operation:\n");
    	printf("enter 2 for pop operation:\n");
	    printf("enter 3 for display operation:\n");
    	printf("enter 4 for exit operation:\n");
    	printf("enter your choise");
	    scanf("%d",&i);
	     switch(i)
	       {
		      case 1 : push();break;                                              //function call
		      case 2 : pop();break;                                              //function call
	          case 3 : display();break;                                         //function call
		      case 4 : exit();break;                                           //function call
	          default : printf("invelid input\n");break;
	        }
     }
	  while(i!=4);
     
}
void push()
{
	int a;
	if(top==maxsize-1)
	{printf("stack overflow\n");
	}
	else
	{printf("enter value to insert in stack :\n");
	 scanf("%d",&a);
	 top++;
	 stack[top]=a;
	}
	
}
void pop()                                                                       //function definition
{ if(top==maxsize-1)
   { printf("stack underflow\n");
   }
  else
  {printf("popped element:%d\n",stack[top]);
   top=top--;
  }

	
}
void display()                                                                    //function definition
   
{  int a;
   if(top== -1)
    {printf("there is no element\n");
	}
	else
	{
		printf("---display---\n");
		for(a=0;a<=top;a++)
		{printf("%d\t",stack[a]);
		printf("\n");
		}
	}
	
}
void exit()                                                                            //function definition
{printf("thank u for trying\n");
	
}
