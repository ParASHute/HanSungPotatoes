#include <stdio.h>
#include <string.h>


int main(void) 
{
	char arr[101];
	int n = 0, i;
	scanf("%s", arr);
	for (i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
			n++;
	}
	printf("%d", n);
}