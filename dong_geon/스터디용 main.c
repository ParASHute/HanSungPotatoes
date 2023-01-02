#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, n, money[1001] = { 0 }, max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		max = 0;
		scanf("%d %d %d", &a, &b, &c);
		max = a > b ? a : b;
		max = max > c ? max : c;
			
		if (a == b && b == c)
			money[i] = 10000 + (a * 1000);
		else if (a == b || a == c || b == c)
		{
			if (a == b)
				money[i] = 1000 + (a * 100);
			if (a == c)
				money[i] = 1000 + (a * 100);
			if (c == b)
				money[i] = 1000 + (b * 100);
		}
		else
			money[i] = max * 100;
	}
	max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < money[i])
			max = money[i];
	}
	printf("%d", max);
}