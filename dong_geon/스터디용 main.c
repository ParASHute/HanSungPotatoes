#include <stdio.h>

cd[100001];

void num(int n)
{
	int i, sum = 0, cnt = 0;
	for (i = 1; i <= n / 2; i++)
	{
		if (n % i == 0) {
			sum += i;
			cd[cnt] = i;
			cnt++;
		}
	}
	if (sum == n)
	{
		printf("%d = ", n);
		for (i = 0; i < cnt - 1; i++)
			printf("%d + ", cd[i]);
		printf("%d\n", cd[cnt-1]);
	}
	else
		printf("%d is NOT perfect.\n", n);
}

int main() 
{
	int n;
	while (1)
	{
		scanf("%d", &n);
		if (n == -1)
			break;
		num(n);
	}
	return 0;
}
