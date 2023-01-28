#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int a[100] = { 0 };
	int count = 0,count1=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < N; j++)
	{
		for (int k = 1; k < 1001; k++)
		{
			if (a[j] % k == 0) {
				count++;
			}
		}
		if (count == 2)
		{
			count1++;
		}
		count = 0;
	}
	printf("%d", count1);
	return 0;
}