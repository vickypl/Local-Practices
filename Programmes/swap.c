#include <stdio.h>

void swap(int a, int b) {
	int temp=a;
	a=b;
	b=temp;
	printf("a: %d\n", a);
	printf("b: %d\n", b);
}


int main(int argc, char const *argv[])
{
	int a=10;
	int b=20;
	printf("a: %d\n", a);
	printf("b: %d\n", b);
printf("============\n");

	swap(a,b);


	return 0;
}