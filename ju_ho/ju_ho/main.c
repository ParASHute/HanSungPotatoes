#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[10001] = { 0 };

int main() {
	int N,c = 1,count = 0;
	int b;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &b);
		while (1)
		{
			if (b == c)
			{
				a[c]++;
				c = 1;
				break;
			}
			else
			{
				c++;
			}
		}
	}
	for (int i = 1; i < 10001; i++)
	{
		if (a[i] > 0) {
			for (int j = 0; j < a[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}
}