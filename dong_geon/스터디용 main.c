#include <stdio.h>
#include <math.h>

int main(void)
{
	double n, i, k, c = 0, pas = 1;
	scanf("%lf %lf", &n, &k);

	k -= 1;
	n -= 1;
	if (k == 0)
		printf("1");
	else {
		for (i = 0; i < k; i++)
		{
			pas *= ((n - c) / (i + 1.0));
			c += 1.0;
		}
		printf("%.0lf", pas);
	}
}