#include <stdio.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}



int main(int argc, char const *argv[])
{
	char string[1000]="abcdefghijkl";
	int k;
	for (int j = 0; j < lengthofStr(string); ++j) {
			k=j;
			while(k<lengthofStr(string)) {
				printf("%c", string[k]);
				k++;
			}
			if (j!=lengthofStr(string)-1)
			{
				printf(", ");
			} else {
				printf(".");
			}
		}
		printf("\n");
	return 0;
}