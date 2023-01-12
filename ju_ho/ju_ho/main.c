#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int count = 0;
	int sum = 0;
	char str[82] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", str);
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == 'O')
			{
				count++;
				if (str[i + 1] == 'X')
				{
					sum += count;
					count = 0;
				}
				sum += count;
			}
		}
		printf("%d\n", sum);
		sum = 0;
		count = 0;
	}
	return 0;
}