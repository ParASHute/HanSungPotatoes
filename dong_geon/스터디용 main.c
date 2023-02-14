#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[6][16] = { 0 };
	int len = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%s", arr[i]);
		len += strlen(arr[i]);
	}

	int index = 0, plus = 0;
	while (1) {
		for (int i = 0; i < 5; i++)
		{
			if (plus == len)
				break;
			if (arr[i][index] != '\0') {
				printf("%c", arr[i][index]);
				plus++;
			}
		}
		if (plus == len)
			break;
		index++;
	}
}