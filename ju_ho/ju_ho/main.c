#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count=0;
	char str[255] = { 0 };
	while (1) {
			count = 0;
			gets(str);
			if (str[0] == '#')
			{
				return 0;
			}
			for (int i = 0; str[i]!=NULL; i++) {
				if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
				{
					count++;
				}
			}
			printf("%d\n", count);
	}
	return 0;
}