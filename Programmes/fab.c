#include<stdio.h>
#include<stdlib.h>

int main() {
	int c,a,b,n;
	printf("Enter the value of a b and n: \n");
	scanf("%d %d %d", &a,&b,&n);
	printf("%d\n", a);
	printf("%d\n", b);
	while(c<n) {
		c=a+b;
		printf("%d\n", c);
		a=b;
		b=c;
	}	
}