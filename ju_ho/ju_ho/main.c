#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	double sum = 0.0, sum1 = 0.0;
	double A[10000] = { 0 };
	double max = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
		if (max < A[i])
		{
			max = A[i];
		}
	}
	for (int j = 0; j < N; j++)
	{
		sum1 += (A[j] / max) * 100.0;
	}
	sum = sum1 / N;
	printf("%f", sum);
	return 0;
}