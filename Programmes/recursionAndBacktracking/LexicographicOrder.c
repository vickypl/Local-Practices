#include <stdio.h>


int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}

/*
void traverse(char string[], int length, int start, char set[], char subset[]) {
	if (start>=length)
	{
		return;
	}
	for (int i = start; i < length; ++i)
	{
		pushSubSet(string[i]);
		pushSet(subset[i]);
		traverse(string, length, start+1, set, subset);
		popSubset();
	}
}
*/

void merge(char arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int i = 0; 
    int j = 0;      
    int k = l;     
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) 
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 	while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(char arr[], int l, int r)
{
    if (l < r)
    {
         
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r); 
        merge(arr, l, m, r);
    }
}

void SubPalindrome(char string[]) {
	int length=lengthofStr(string);
	char temp[100];
	for (int i = 0; i < length; ++i)
	{
		for (int j = 1; j <=length-i ; ++j)
		{
			int k=0;
			while(k<j) {
				temp[k]=string[k+i];
				k++;
			}
			temp[k]='\0';
			printf("%s ", temp);
		}
	}

}

int main(int argc, char const *argv[])
{
	char string[100]="abc"; //a ab abc ac b bc c
	//traverse(string, lengthofStr(string), 0, set, subset);
	//for (int i = 0; set[i]!='\0'; ++i)
	//{
	//	printf("%c ", set[i]);
	//}
	int length=lengthofStr(string)-1;
	mergeSort(string, 0, length);
	SubPalindrome(string);

//	printf("%s\n", string);

	return 0;
}