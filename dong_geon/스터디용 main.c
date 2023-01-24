#include <stdio.h>

int main() 
{
	int a, b, i, x=0, y=0;
	char c;
	scanf("%d%c%d", &a, &c ,&b);
	if (a < b)
	{
		for (i = 1; i <= b; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				x = a / i;
				y = b / i;
			}
		}
	}
	else
	{
		for (i = 1; i <= a; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				x = a / i;
				y = b / i;
			}
		}
	}
	printf("%d:%d", x, y);
	return 0;
}
