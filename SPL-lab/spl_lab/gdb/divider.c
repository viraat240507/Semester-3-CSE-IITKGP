#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the input for a:\n");
	scanf("%d",&a);
	printf("Enter the input for b:\n");
   	scanf("%d",&b);
	int q;
	if(a>b) q=a/b;
	else q=b/a;
	printf("Division result= %d\n",q);
	return 0;
}
