#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int a;
	int max;
	int min;
	scanf("%d", &N);
	scanf("%d", &a);
	max = a;
	min = a;
	for (int i = 0; i < N-1; i++)
	{
		scanf("%d", &a);
		if (max < a)
		{
			max = a;
		}
		if (min > a)
		{
			min = a;
		}
	}
	printf("%d %d", min, max);
	return 0;
}