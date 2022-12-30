#include <stdio.h>

int main(void)
{
	int n, i;
	long long arr[91];
	scanf("%d", &n);
	arr[0] = 0;
	arr[1] = 1;
	for (i = 0; i <= n; i++)
	{
		arr[i + 2] = arr[i] + arr[i + 1];
	}
	printf("%lld", arr[n]);
}