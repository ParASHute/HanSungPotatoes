#include <stdio.h> 
#include <stdlib.h>

int gcd(int a, int b)
{
	int i, gcd = 1;
	for (i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	return gcd;
}

int main(void)
{
	int n, ring[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &ring[i]);
	for (int i = 1; i < n; i++)
		printf("%d/%d\n", ring[0] / gcd(ring[0], ring[i]), ring[i] / gcd(ring[0], ring[i]));
	return 0;
}
