#include <stdio.h>

int main(void)
{
	int n, i, j, sum = 0, count = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = 0;
		for (j = i; j <= n; j++)
		{
			sum += j;
			if (sum == n) {
				count++;
				break;
			}

			if (sum > n)
				break;
		}
	}
	printf("%d", count);
}