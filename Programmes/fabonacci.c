#include<stdio.h>

int main() {
	int n=10;
	int a=0,b=1,c;
	printf("%d\t", a);
	printf("%d\t", b);
	for (int i = 0; i < n; ++i)
	{
		c=a+b;
		printf("%d\t", c);
		a=b;
		b=c;
	}
}