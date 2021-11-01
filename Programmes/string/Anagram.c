#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


int main(int argc, char const *argv[])
{
	char string1[1000]="file";
	char string2[1000]="efil";
	char temp;
	int i,j;
	bool sta=true;

	int count=0;
	char x=x;
	if (lengthofStr(string1)==lengthofStr(string2))
	{
		for (i = 0; i < lengthofStr(string1)-1; i++) {
	    	for (j = i+1; j < lengthofStr(string1); j++) {
	        	if (string1[i] > string1[j]) {
	            	temp  = string1[i];
	            	string1[i] = string1[j];
	            	string1[j] = temp;
	        	}
	        	if (string2[i] > string2[j]) {
	            	temp  = string2[i];
	            	string2[i] = string2[j];
	            	string2[j] = temp;
	        	}
	    	}
	 	}

	 	printf("%s\n", string1);
	 	printf("%s\n", string2);

	 	for (int i = 0; i < lengthofStr(string1); ++i)
	 	{
	 		if (string1[i]!=string2[i])
	 			sta=false;
	 	}
	 	if (sta)
	 	{
	 		printf("Yes it is an Anagram..\n");
	 	} else {
	 		printf("No it is not an Anagram..\n");
	 	}

	} else {
			printf("No it is no an Anagram..\n");
	}
	return 0;
}