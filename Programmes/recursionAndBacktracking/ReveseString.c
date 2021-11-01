#include <stdio.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


/*void reverse(char *str) 
{ 
   if (*str) 
   { 
       reverse(str+1); 
       printf("%c", *str); 
   } 
} */

void revrec(char string[], int x) {
	
	if (string[x]=='\0')
		return;
	else
		printf("%c", string[x]);
		revrec(string, --x);
}


int main(int argc, char const *argv[])
{
	char string[100]="abcdefghijkl";
	int y=lengthofStr(string)-1;
	printf("%s\n", string);
	//reverse(string);
	revrec(string, y);
	printf("\n");
	return 0;
}