#include <stdio.h>

int main()
{
	int k, n, x, tmp;
	int num[10] = { 0 };
	scanf("%d %d", &n, &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &x);
		num[x] = 1;
	}
	
	for (int i = n; i > 0; i--)
	{
		tmp = 1;
		for (int j = i; j > 0; j /= 10)
		{
			if (num[j % 10] != 1)
			{
				tmp = 0;
				break;
			}
		}
		if (tmp == 1) {
			printf("%d", i);
			break;
		}
	}
}