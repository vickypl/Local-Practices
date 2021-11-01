#include <stdio.h>


int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


int isSubstring(char s1[], char s2[]) 
    { 
        int M = lengthofStr(s2);
        int N = lengthofStr(s1);
  
        /* A loop to slide pat[] one by one */
        for (int i = 0; i <= N - M; i++) { 
            int j; 
  
            /* For current index i, check for 
            pattern match */
            for (j = 0; j < M; j++) 
                if (s2[i + j]!= s1[j]) 
                    break; 
            	if (j == M) 
                	return i; 
        	} 
  
    	return -1; 
    } 



int main(int argc, char const *argv[])
{
	char string1[100]="abcdef";
	char string2[100]="defabc";
	char temp[1000],t=0;
															//"abcdefdefabc"
	int length=lengthofStr(string1);
	for (int j = 0; string2[j] != '\0'; ++j, ++length) {
    	string1[length] = string2[j];
  	}
	//printf("%s\n", string1);

	int index;
	for (int i = 0; i < lengthofStr(string1); ++i)
	{
		if (string2[0]==string1[i])
		{
			index=i;
			break;
		}
	}

	printf("%s\n", string1);
	printf("%s\n", string2);

	int x=isSubstring(string1, string2);
	printf("%d\n", x);


	return 0;
}