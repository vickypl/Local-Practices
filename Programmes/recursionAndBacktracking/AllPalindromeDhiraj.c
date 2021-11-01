#include <stdio.h>  
#include <string.h>  
#include <stdbool.h>


int lengthofStr(char string[]) {
  int len=0;
  while(string[len]!='\0')
    len++;
  return len;
}


bool isPalindrome(char string[]) {

  int length=lengthofStr(string)-1;
  int start=0;
  bool result=true;
  while(start<length) {
    if (string[start]!=string[length])
    {
      result=false;
    }
    start++;
    length--;
  }
  return result;
}

void sub_string(char s[], char sub[], int i, int len){  
   int j = 0;  
   while (j < len) {  
      sub[j] = s[i+j];  
      j++;  
   }  
   sub[j] = '\0';  
}  
   
int main()  
{  
    char c[1000],str[100]="hello";  
    int i, j, len =lengthofStr(str);
    for(i = 0; i < len; i++)
    {  
        for(j = 1; j <= len-i; j++)
        {  
            //printf("i=%d, j=%d\n", i,j);
            sub_string(str,c,i,j);  
            if (isPalindrome(c))
            {
              printf("%s ",c);  
            }
        }  
    }  
    return 0;  
}
