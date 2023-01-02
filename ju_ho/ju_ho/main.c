#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N,a;
	int count1 = 0,count2 = 0;
	int val[100] = { 0 };
	int max = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a);
		val[i] = a;
	}
	for (int j = 0; j < N; j++)
	{
		if (max < val[j])
		{
			max = val[j];
			count1++;
		}
	}
	max = 0;
	for (int k = N-1; k >= 0; k--)
	{
		if (max < val[k])
		{
			max = val[k];
			count2++;
		}
	}
	printf("%d\n", count1);
	printf("%d", count2);
	return 0;
}