#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, k = 0;
	int b = 0;
	while (1)
	{
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		k = a;
		if (k / 10 == 0)
		{
			printf("yes\n");
		}
		else if (k / 100 == 0)
		{
			if (k / 10 == k % 10)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else if (k / 1000 == 0)
		{
			if (k / 100 == k % 10) {
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else if (k / 10000 == 0)
		{
			if (k / 1000 == k % 10) {
				b = k / 100 - (k / 1000 * 10);
				if (b == k % 100 / 10)
				{
					printf("yes\n");
				}
				else
				{
					printf("no\n");
				}
			}
			else
				printf("no\n");
		}
		else if (k / 100000 == 0)
		{
			if (k / 10000 == k % 10)
			{
				b = k / 1000 - (k / 10000 * 10);
				if (b == k % 100 / 10)
				{
					printf("yes\n");
				}
				else
				{
					printf("no\n");
				}
			}
			else
			{
				printf("no\n");
			}
		}
	}
	return 0;
}