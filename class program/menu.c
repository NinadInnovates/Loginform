#include <stdio.h>
int main ()
{
  int ch;
  void add() ;
  void sub() ;
  void mul() ;
  void di() ;
  printf ("Menu\n") ;
  printf ("1->Addition\n2->Subtraction\n3->Multiplication\n4->Divison\n");
  printf("Enter Your Choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
  	case 1:
  	{
  		add();
  		break;
  	}
  	case 2:
  	{
  	    sub();
  	    break;
  	}
  	case 3:
  	{
  		mul();
  		break;
  	}
  	case 4:
  	{
  		di();
  		break;
  	}
  	default:
  	{
  		printf("Invalid Choice");
  		break;
  	}
  }
}
void add()
{
	int a,b,c;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Addition=%d",c);
}		
void sub()
{
	int a,b,c;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("Subtraction=%d",c);
}		
void mul()
{
	int a,b,c;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("Multiplication=%d",c);
}			
void di()
{
	int a,b,c;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&a,&b);
	c=a/b;
	printf("Division=%d",c);
}			
	
	
	
	
	
	
	
	
	
	
	
	
