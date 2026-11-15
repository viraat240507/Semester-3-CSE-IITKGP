#include <stdio.h>
int power(int b,int x) {
	int product=1;
	for(int i=0;i<x;i++) {
		product*=b;
	}
	return product;
}
