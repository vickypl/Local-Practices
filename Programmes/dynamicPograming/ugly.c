#include <stdio.h>


int maxDivS(int a, int b) {
	while(a%b==0)
		a=a/b;
	return a;
}

int isUgly(int number) {	
	number=maxDivS(number, 2);
	number=maxDivS(number, 3);
	number=maxDivS(number, 5);

	return (number==1)?1:0;
}

int nthUglyNum(int n) {
	int i=1;
	int count=1;
	while(n>count) {
		i++;
		if (isUgly(i))
			count++;
	}
	return i;
}


int main(int argc, char const *argv[])
{
	printf("Answer: %d\n", nthUglyNum(150));
	return 0;
}