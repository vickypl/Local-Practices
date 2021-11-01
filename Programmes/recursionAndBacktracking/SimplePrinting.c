#include <stdio.h>

long long int rec(int x) {
	if(x==0)
		return 1;
	else 
		return x*rec(x-1);
	 
}


int main(int argc, char const *argv[])
{

	//rec(5);
	printf("%lld \n", rec(10));
//	rec(10);
//		printf("\n");
//	rec(15);
//		printf("\n");
	//rec(20);

	return 0;
}