#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, max, count = 0;
	int x[200] = { 0 };
	int y[200] = { 0 };
	int z[200] = { 0 };
	scanf("%d", &N);
	max = N;
	count = max;
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			if (x[i] >= x[j] || y[i] >= y[j])
			{
				z[i] = max--;
			}
		}
		max = count;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", z[i]);
	}
	return 0;
}