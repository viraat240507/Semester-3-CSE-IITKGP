#include <stdio.h>
#include "div_2.h"
#include "div_3.h"
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	if(div_2(n)==1 && div_3(n)==1) printf("Yes, divisible by 6");
	else printf("Not divisible by 6\n");
}
