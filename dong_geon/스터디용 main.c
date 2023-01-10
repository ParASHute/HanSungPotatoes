#include <stdio.h> 
#include <string.h>

int main(void)
{
	char arr[101];
	int i, len;
	scanf("%s", arr);
	len = strlen(arr);
	if (len % 3 == 1)
		printf("%d", arr[0]-48);
	if (len % 3 == 2)
		printf("%d", (arr[0] - 48) * 2 + arr[1] - 48);
	for (i = len % 3; i < len; i += 3)
	{
		printf("%d", (arr[i] - 48) * 4 + (arr[i+1] - 48) * 2 + arr[i+2] - 48);
	}
}
