#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int reverse(int n)
{
	int num[10] = { 0 };
	int len, i;
	while (n != 0)
	{
		num[n % 10]++;
		n /= 10;
	}
	for (i = 0; i < 10; i++)
	{
		if (num[i] > 1)  //2개 이상 나왔다면
			return 0;
	}
	return 1;
}

int main(void)
{
	int i, count = 0, N, M;
	while (scanf("%d %d", &N, &M) != EOF) {
		count = 0;
		for (i = N; i <= M; i++)
		{
			if (reverse(i) == 1)
				count++;
		}
		printf("%d\n", count);
	}
}