
#include <stdio.h>

int main(void)
{
	int i, j, k, n[16];
	while (1) {
		int count = 0;
		for (i = 0; ; i++)
		{
			scanf("%d", &n[i]);
			if (n[0] == -1)
				return 0;
			if (n[i] == 0)
				break;
		}
		for (j = 0; j < i; j++)
		{
			for (k = 0; k < i; k++)
			{
				if (n[j] * 2 == n[k])
					count++;
			}
		}
		printf("%d\n", count);
	}
}