#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char str[100][60];
char num[200][60];


int main() {
	int n, count = 0;
	char arr;
	while (1) {
		int num1[200] = { 0 };
		scanf("%d", &n);
		while (getchar() != '\n');
		count++;
		if (n == 0)
		{
			break;
		}
		for (int i = 0; i < n; i++)
		{
			fgets(str[i], 60, stdin);
		}
		for (int i = 0; i < n; i++)
		{
			scanf(" %[^\n]s", num[i]);
		}
		if (n == 1)
		{
			for (int i = 0; i < 1; i++)
			{
				scanf(" %[^\n]s", num[i + n]);
				num1[num[i + n][0] - 49] = 1;
			}
		}
		else {
			for (int i = 0; i < n - 1; i++)
			{
				scanf(" %[^\n]s", num[i + n]);
				num1[num[i + n][0] - 49] = 1;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (num1[i] == 0)
			{
				printf("%d %s", count, str[i]);
			}
		}
	}
	return 0;
}