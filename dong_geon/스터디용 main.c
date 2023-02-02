#include <stdio.h>

int main(void)
{
	int n, i, h[50], w[50];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %d", &h[i], &w[i]);
	for (i = 0; i < n; i++)
	{
		int score = 1;
		for (int j = 0; j < n; j++)
		{
			if (h[i] < h[j] && w[i] < w[j])
				score++;
		}
		printf("%d ", score);
	}
}