#include <stdio.h>
int fib(int n)
{
	if(n<1) return 0;
	if(n==1) return 1;
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int fib_o=fib(n);
	printf("Fibonacci output: %d\n",fib_o);
	return 0;
}
