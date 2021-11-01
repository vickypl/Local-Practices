#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void print(char array[], int n) {
	for (int i = 0; i < n; ++i)
	{
		printf("%c", array[i]);
	}
}


int countingValleys(int n, char *s) {
      int c=0,v=0;
    for(int i=0;s[i] !='\0';i++)
    {
        if(s[i] == 'D')
            c--;
        else if(s[i] == 'U')
        {
            c++;
            if(c == 0 && s[i] == 'U')
                v++;
        }
           
    }
    return v;
}


int main() {
int n;
scanf("%d", &n);
char string[MAX]; //={'U', 'D', 'D', 'D', 'U', 'D', 'U', 'U'};
for (int i = 0; i < n; ++i)
	{
		scanf("%c", &string[i]);
	}
int x=countingValleys(8, string);
printf("%d", x);
}