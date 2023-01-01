#include <stdio.h>


int main(void)
{
	int n, i, count = 0, x = 1;
	scanf("%d", &n);
	if (n < 5)
	{
		printf("0");
		return 0;
	}
	else {
		for (i = 5; i <= n; i++)
		{
			if (i % 5 == 0)
				count++;
			if (i % 25 == 0)
				count++;
			if (i % 125 == 0)
				count++;
		}
	}
	printf("%d", count);
}