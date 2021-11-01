#include <stdio.h>

char * reversepPrint( char *name )
{
    char *normal = name, *reverse = name;

    while ( *reverse ) ++reverse;

    if ( normal < reverse )
    {
        for ( ; normal < --reverse; ++normal  )
        {
            char c = *normal;
            *normal = *reverse;
            *reverse  = c;
        }
    }

    return name;
}

int main( void ) 
{
    char s[] = "This is the way i live";

    printf("%s", reversepPrint(s));

    return 0;
}




/*#include <stdio.h>
#define MAX 100
int top=-1;
char stack[MAX];
void push(char item) {
	if (top==MAX-1)
	{
		printf("Stack is Full..\n");
	} else {
		top++;
		stack[top]=item;
	}
}

char pop() {

	char x;

	if (top==-1)
	{
		printf("Stack is Empty..\n");
	} else {
		x=stack[top];
		top--;
	}
	return x;
}


int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}

int main(int argc, char const *argv[])
{
	char string[1000]="this is the way i live my life in the middle of the sing";
	char tt;
	for (int i = 0; i < lengthofStr(string); ++i) {
		if (string[i]!=' ')
		{
			push(string[i]);
		} else {
			while(top!=-1) {
				tt=pop();
				printf("%c", tt);
			}
			printf(" ");
		}
	}
	while(top!=-1) {
		tt=pop();
		printf("%c", tt);
	}
	return 0;
}





*/





/*
int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}

void swap(char *a, char *b) {
	char temp=*a;
	*a=*b;
	*b=temp;
}

int main(int argc, char const *argv[])
{
	char string[100]="Love me like you do";

	printf("%s\n", string);


	int start=0, end=0;
	char temp;
	for (int i = 0; i <lengthofStr(string); ++i)
	{
		if (string[i]==' ' || string[i+1]=='\0')
		{
			end=i-1;
			while(start<=end) {
				swap(&string[start-1], &string[end+1]);
				start++,end--;
			}
			/*for (int end=(string[i]==' ' ? i-1 : i); start < end; ++start,--end)
			{
				swap(&string[start], &string[end]);
			}*/
		//	start=start+1;
//		}
//	}

//	printf("%s\n", string);
//	return 0;
//}

//*/

