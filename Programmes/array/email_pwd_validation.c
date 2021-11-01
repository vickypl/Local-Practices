#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
void e_chek(char email[]) {
	int count=0,length=0;
		while(email[count]!='@') 
		{
			count++;
		}
		while(email[length]!='\0') {
			length++;
		}
	if (count>=7)
	{
		int x=length-3;
		int y=x-count;
		if((x-count)>3) {		
			if((email[x]=='c' && email[x+1]=='o' && email[x+2]=='m') || ((email[x+1]=='i') && (email[x+2]=='n'))) {
				printf("Valid email\n");
			} else {
				printf("Invalid Email..\n");
			}
		} else{
			printf("Invalid Email..\n");
		}	
	} else {
		printf("Invalid Email..\n");
	}
}
void pwd_chk(char string[], int n) {
	int i=0,count=0;
	bool isUpper=false;
	bool isLower=false;
	bool isSpecial=false;
	bool isNum=false;
	char upper[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[26]="abcdefghijklmnopqrstuvwxyz";
	char special[32]=" !#$%&'()*+,-./:;<=>?@[/^]_`{|}~";
	char num[10]="0123456789";
	while(string[i]!='\0') {
		++count;
		i++;
	}
	if(count>9) 
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (string[i]==upper[j])
				{
					isUpper=true;
				} 		
			}
			for (int m = 0; m < 26; m++)
			{
				if (string[i]==lower[m])
				{
					isLower=true;
				} 
			}
			for (int k = 0; k < 32; k++)
			{
				if (string[i]==special[k])
				{
					isSpecial=true;
				} 		
			}
			for (int l = 0; l < 10; l++)
			{
				if (string[i]==num[l])
				{
					isNum=true;
				}
			}		
		}	
		if ((isUpper) && (isNum) && (isSpecial) && (isLower))
		{
			printf("Password stregth high level \n");
		} else if (((isUpper) && (isNum)) || ((isSpecial) && (isLower)) || ((isNum) && (isSpecial)) || ((isUpper) && (isLower))) {
			printf("Password stregth medium level\n");
		} else if ((isNum) || (isUpper) || (isLower) || (isSpecial)) {
			printf("Password stregth low level\n");
		}
	} else {
		printf("Password too short, minimum length 9..\n");
	}
}
void print(char arr[], int n) {
	for (int i = 0; i <n ; ++i)
	{
		printf("Charecters are:-%c\n", arr[i]);
	}
}
int main() {
	//input
	char password[15],email[30];
	printf("Enter a valid E-mail address: \n");
	scanf("%s", email);
	printf("Type the password of minimum length 9: \n");
	scanf("%s", password);
	printf("===================================================\n");
	printf("%s\n", email);
	printf("%s\n", password);
	printf("===================================================\n");
	e_chek(email);
	pwd_chk(password, 10);
}