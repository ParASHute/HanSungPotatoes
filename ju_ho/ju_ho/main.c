#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M;
	int max = 0;
	int max1 = 0;
	int val[102] = { 0 };
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &val[i]);
	}
	
	for (int j = 0; j < N-2; j++)
	{
		for (int k = j+1; k < N; k++)
		{
			for (int q = k+1; q < N; q++)
			{
				max = val[j] + val[k] + val[q];
				if (max <= M)
				{
					if (max1 < max)
					{
						max1 = max;
					}
				}
				max = 0;
			}
		}
	}	
	printf("%d", max1);
	return 0;
}