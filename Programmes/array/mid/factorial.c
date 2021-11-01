#include <stdio.h>

int fact(int n) {
	if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}


int main(int argc, char const *argv[])
{
	int x=10;
	//int t=fact(5);
	//printf("%d\n", t);
	int ans=1;
	for (int i = x; i > 0; i--)
	{
		ans=ans*i;
	}
	printf("%d\n", ans);
	return 0;
}