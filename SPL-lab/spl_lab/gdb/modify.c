#include <stdio.h>
int modify(int* a)
{
	*a +=5;
	*a *=2;
	*a -=10;
	return 0;
}
int main()
{
	int a;
	printf("Input for a:\n");
	scanf("%d",&a);
	modify(&a);
	printf("Modified value of a: %d\n",a);
	return 0;
}
