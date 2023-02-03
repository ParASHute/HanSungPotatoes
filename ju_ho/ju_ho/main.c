#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n, count = 0;
	char arr;
	while (1) {
		char str[100][60];
		int a;
		int num1[200] = { 0 };
		scanf("%d", &n);
		getchar();
		count++;
		if (n == 0)
		{
			break;
		}
		for (int i = 0; i < n; i++)
		{
			gets(str[i]);
		}
		for (int i = 0; i < 2 * n - 1; i++)
		{
			scanf("%d %c", &a, &arr);
			num1[a - 1]++;
		}
		for (int i = 0; i < n; i++)
		{
			if (num1[i] == 1)
			{
				printf("%d %s\n", count, str[i]);
			}
		}
	}
	return 0;
}