#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int indexMass ()
{
	int i, m, h;
	printf( "Enter mass body ");
	scanf("%d", &m);
	printf("Enter height body ");
	scanf("%d", &h);
	i=m/(h*h);
	printf("index mass equal %d", i);
	return 0;
}

int exchangeABC ()
{
//С тремя переменными:
	int a,b,c;
	printf( "\nEnter a ");
	scanf("%d", &a);
	printf( "Enter b ");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("A= %d", a);
	printf("\nB= %d", b);
	return 0;
}

int exchangeAB ()
{
// С вумя переменными:
	int a, b;
	printf( "\nEnter a ");
	scanf("%d", &a);
	printf( "Enter b ");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("A= %d", a);
	printf("\nB= %d", b);
	return 0;
}

int SquareEquation ()
{
	double a,b,c,d,x,x1,x2;
	printf( "\n Enter a ");
	scanf("%lf", &a);
	printf( "Enter b ");
	scanf("%lf", &b);
	printf( "Enter c ");
	scanf("%lf", &c);
	d = (b*b) - (4 * a * c);
		if (d<0)
		{
			printf("\n No solution!");
		}
			else if (d==0)
			{
				x=-b/(2*a);
				printf("\n Equation have 1 decision, x= %lf", x);
			}
				else if (d>0)
				{
					x1=(-b + sqrt(d)) / (2 * a);
					x2=(-b - sqrt(d)) / (2 * a);
					printf("\n Equation have 2 decision, x1= %lf", x1);
					printf("\n x2= %lf", x2);
				}
	
	return 0;
}

int monthNumber ()
{
	int n;
	printf("\nEnter month number ");
	scanf("%d", &n);
	if (n==12 || n<=2)
	{
	printf ("Winter!");
	}
		else if (n>=3 && n<6)
		{
		printf("Spring!");
		}
			else if (n>=6 && n<9)
			{	
			printf("Summer!");
			}
				else if (n>=9 && n<12)
				{
				printf("Autumn!");
				}
	
	return 0;
}

int age()
{
int a,r;
printf("\nEnter age ");
scanf("%d", &a);
	r=a%10;
	if (r==1 && a!=11)
	{
	printf("%d Год", a);
	}
		else if (a>=5 && a<20)
		{
		printf("%d Лет", a);	
		}
			else if (r>=2 && r<5)
			{
			printf("%d Года", a);	
			}
				else if (r==0 || r>=5)
				{
				printf("%d Лет", a);
				}
			
	return 0;
}

int division ()
{
	int n,k,i;
	i=0;
	printf("\nEnter division ");
	scanf("%d", &n);
	printf("Enter divider ");
	scanf("%d", &k);
	while (n>k)
	{
		n=n-k;
		i++;
	}
	printf("%d private ", i);
	printf("\n%d remainder ", n);
	
	return 0;
}

int evenNumber ()
{
	int n;
	printf("\nEnter number ");
	scanf("%d", &n);
	if (n%2==0)
	{
		printf("False");
	}
		else printf("True\n");
	
	return 0;
}

void averege ()
{
	int counter = 0;
	float sum =0;
	int in=0;
	
/*	do {
		scanf ("%d", &in);
		if (in== -1) break;
		sum+=in;
		counter++;
	}	while (in !=-1);
*/	
		while (in !=-1)
		{
		scanf ("%d", &in);
		sum+=in;
		counter++;
			if (in==-1) 
			{
			sum+=1; 
			counter-=1;
			}
		}
		if (counter !=0)
		printf("mean = %.2f\n", (float) (sum / counter));
			else 
			printf("%s\n", "No input");
}


int main (int argc, const char** argv)
{
	indexMass ();
	exchangeABC ();
	exchangeAB ();
	SquareEquation ();
	monthNumber ();
	age();
	division ();
	evenNumber ();
	averege ();
	
	return 0;
}
