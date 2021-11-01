#include <stdio.h>
 
int main()
{
 
    char str[100]="Love me like you do",text[100];
    int i=0,j=0;
        while(str[i]!='\0')
                i++;
    		while(i>0)
    		{
            	text[j]=str[--i];
            	++j;
 
        	}
        text[j]='\0';

        printf("\nReversed Sentence :: ");
 
	    for(i=0;text[i]!='\0';i++)
    	{
 
       		if(text[i+1]==' ' || text[i+1]=='\0')
       		{
 
           		for(j=i;j>=0 && text[j]!=' ';j--)
                	printf("%c",text[j]);
                printf(" ");
        	}
  		}
 
    return 0;
}