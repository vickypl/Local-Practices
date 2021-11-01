#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
	int arr[5]={12,13,12,42,22};
	bool state=false;
	for (int i = 0; i < 5; ++i)
	{
		for (int j =i+1; j < 5; ++j)
		{
			if (arr[i]==arr[j])
			{
				printf("%d\n", arr[i]);
				state=true;
				break;
			}
		}
	}
	if (!state)
	{
		printf("%d\n", -1);
	}
	return 0;
}