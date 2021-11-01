#include <stdio.h>


int gcd(int a, int b) {
	if (a==b)
	{
		return a;
	}
	if(a%b==0) 
	{
		return b;
	}
	if (b%a==0)
	{
		return a;
	}
	if (a>b)
	{
		return (gcd((a%b),b));
	} else {
		return (gcd(a,(b%a)));
	}
}


void ans(int arr[], int a, int b) {

	int x=gcd(arr[a], arr[a+1]);
	for (int i = a+2; i <= b; ++i)
	{
		x=gcd(x, arr[i]);
	}
	printf("Answer: %d\n", x);

}
int main(int argc, char const *argv[])
{
	int arr[5]={6,49,70,35,5};
	ans(arr,1,2);
	ans(arr,3,4);
	ans(arr,0,1);
	return 0;
}