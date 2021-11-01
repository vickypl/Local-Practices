#include<stdio.h>
#include<stdlib.h>

int main() {
	int year;
	scanf("%d", &year);
	if(1700<=year && year<=2700) {
		if ((year%4)==0)
		{
			printf("12.09.%d", year);
		}
	}
	return 0;
}