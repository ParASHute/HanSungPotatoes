#include <stdio.h>
//2721 삼각수의 합 정답.c
int main(void) 
{
	int n, a, sum, i, plus;
	scanf("%d", &n);
	while (n--) {
		sum = 0;
		scanf("%d", &a);
		for (i = 1; i <= a; i++)
		{
			plus = 0;
			for (int j = 1; j <= i + 1; j++)
				plus += j;
			sum += plus * i;

		}
		printf("%d\n", sum);
	}
}