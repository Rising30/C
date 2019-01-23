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

void degree (int a, int b, int q)
{
	if (b>1)
	{
		degree (a*q, b-1, q);
	}
	printf("\n%d", a);
	
}

int fastdegree (int base, int sign , int c)
{
	if (sign%2==0 && sign>=2)
	{
		base*=base;
		sign/=2;
		fastdegree (base, sign, c);
	}
	else if (sign>1)
	{
		c*=base;
		sign--;
		fastdegree (base, sign, c);	
	}
	base*=c;
	printf("\n%d ", base);
	
	return 0;
}


int main ()
{
	int a; 	//число
	int b;	//степень
	int q;
	int c;
	scanf("%d", &a);
	scanf("%d", &b);
	q=a;	//запоминаем число для рекурсивного ввода в степень
	c=1;	//запоминаем result для рекурсивного ввода в степень со свойством четности
	recursion(a);
	degree(a, b, q);
	fastdegree (a, b, c);
		
	return 0;
}
