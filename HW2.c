#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void recursion (int a)
{
	if (a>=2)
	{
		recursion(a/2);
	}
	printf("%d", a % 2);	
}

void degree (int a, int b, int c)
{
	if (b>1)
	{
		degree (a*c, b-1, c);
	}
	printf("%d \n", a);
	
}


int main ()
{
	int a; 
	int b;
	int c;
	scanf("%d", &a);
	scanf("%d", &b);
	c=a;
	//recursion(a);
	degree(a,b,c);
		
	return 0;
}
