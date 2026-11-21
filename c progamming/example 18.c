#include<stdio.h>
int gcd(int a, int b)
{
	if(b==0)
	return a;
	return gcd(b, a%b);
}
int 1cm(int a, int b)
{
	return(a/gcd(a,b))*b;
}
unsigned long long factorial(int n)
{
	if (n<=1)
	return 1;
	return n*factorial(n-1);
}
long long power (int x,int n)
{
	if(n==0)
	return 1;
	return x*power(x,n-1);
}
int main()
{
	int choice, a, b, n, x;
	do
	{
		printf("\n1. GCD");
		printf("\n2. LCM");
		printf("\n3. Factorial");
		printf("\n4. power(x^n)");
		printf("\nenter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter two non - negative integers: ");
				scanf("%d %d",&a,&b);
				if(a<0||b<0||(a==0&&b==0))
				printf("invalid input.\n");
				else
				printf("GCD = %d\n", gcd(a,b));
				break;
			case 2:
				printf("enter two positive integers: ");
				scanf("%d %d",&a,&b);
				if(a<=0||b<=0)
				printf("invalid input.\n");
				else
				printf("LCM=%d\n",1cm(a,b));
				break;
			case 3:
				printf("enter an integer(0 to 20):");
				scanf("%d",&n);
				if(n<0||n>20)
				printf("invalid input.\n");
				else
				printf("factorial = %11u\n",factorial(n));
				break;
			case 4:
				printf("enter base and non-negative exponent:");
				scanf("%d %d",&x,&n);
				if(n<0||n>20)
				printf("invalid exponent.\n");
				else
				printf("result = %11d\n", power(x,n));
				break;
			case 5:
				printf("exiting program.\n");
				break;
				default:
					printf("exiting program.\n");
				}
			}while(choice!=5);
			return o;
		}