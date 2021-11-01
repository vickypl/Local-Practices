#include <stdio.h>

int length(char string[], int start) {
	if (string[start]=='\0')
		return start;
	else length(string, start+1);
}


int main(int argc, char const *argv[])
{
	char string[100]="Vicky the great Pl";
	printf("%d\n", length(string, 0));
	return 0;
}