#include <stdio.h>
#include "add.h"
#include "multiply.h"
int main()
{
   int a=5;
   int b=6;
   int sum=add(a,b);
   int prod=multiply(a,b);
   printf("Sum=%d and Product=%d\n",sum,prod);
}
