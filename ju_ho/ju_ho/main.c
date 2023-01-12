#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[1000000] = { 0 };
	int count = 0;
	scanf("%[^\n]s", str);
	for (int i = 0; i < strlen(str); i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <='z') && str[i+1] == ' ')
		{
			count++;
		}
		if ((str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') && str[i + 1] == '\0')
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}