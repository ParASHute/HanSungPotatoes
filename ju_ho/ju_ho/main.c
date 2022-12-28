#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count = 0;
	int e, f, c,p,q, div = 0, sum = 0;
	scanf("%d %d %d", &e, &f, &c);
	sum = e + f;
	div = e + f;
	for (int i = 0; i < sum; i++)
	{
		p = div / c;
		q = div % c;
		count += p;
		if (p + q < c)
			break;
		else 
		{
			div = p + q;
		}
	}
	printf("%d", count);
	return 0;
}