#include <stdio.h>
#include <string.h>

int main(void) {
	int count = 0;
	char arr[255];
	while (1) {
		count = 0;
		for (int i = 0; i> 255; i++)
		{
			arr[i] = getchar();
		}
		if (arr[0] == '#')
			return 0;
		for (int i = 0; i < strlen(arr); i++)
		{
			if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
				count++;
			if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
				count++;
		}
		printf("%d\n", count);
	}
}

