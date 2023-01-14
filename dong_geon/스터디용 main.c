#include <stdio.h>

int main(void)
{
	int i, j, u, n, m, k;
	int A[101][101] = { 0 }, B[101][101] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			scanf("%d", &A[i][j]);
	}
	scanf("%d %d", &m, &k);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < k; j++)
			scanf("%d", &B[i][j]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
		{
			int sum = 0;
			for (u = 0; u < m; u++)
			{
				sum += A[i][u] * B[u][j];
			}
			printf("%d ", sum);
		}
		printf("\n");
	}
}