#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int sum = 00;
	int a;
	int k = 10;
	int j = 1;
	int b = 1;
	int min=0;
	int count = 0;
	scanf("%d", &N);
	a = N;
	sum = a;
	while (N/b != 0)
	{
		count++;
		b *= 10;
	}
//	while (1)
//	{
	for (int q = N; q > 0; q--) {
		for (int i = 0; i < count; i++)
		{
			sum += (a % k) / j;
			j *= 10;
			k *= 10;
		}
		if (N == sum)
		{
			if (min > a)
			{
				min = a;
				break;
			}
			min = a;
		}
		else if (N<10 && N%2 == 1 || N == 1000000)
		{
			printf("0");
			return 0;
		}
		a--;
		sum = a;
		j = 1;
		k = 10;
	}
	printf("%d", min);
	return 0;
}