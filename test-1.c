#include <stdio.h>
int n1,x,count;

printf("Enter value: ");
scanf("%d",&n1);

step1:

x=n1%2;

if(x!=0)
{
	printf("%d is odd",n1);
	n1=n1+x;
	count=count+1;
	printf("\tcount->%d\n",count);
	
	goto step1:
}

else
{	
	printf("\n\n\n\n%d\n\n\n\n",n1);	

}	
