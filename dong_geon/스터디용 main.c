#include <stdio.h>

double paskal(double n, double k)
{
	double i, z = 0, pas = 1;
	k -= 1;
	n -= 1;
	if (k == 0)
		return 1;
	else {
		for (i = 0; i < k; i++)
		{
			pas *= ((n - z) / (i + 1.0));
			z += 1.0;
		}
		return pas;
	}
}

int main(void)
{
	double r, c, w, sum = 0, floor;
	scanf("%lf %lf %lf", &r, &c, &w);
	floor = c;  // c를 어디까지 더해줘야 할까? -> floor
	for (double j = r; j < r + w; j++)
	{
		for (double p = c; p <= floor; p++) {
			sum += paskal(j, p);
			//printf("%.0lf ", paskal(j, p)); 원소 확인
		}
		floor++;
	}

	printf("%.0lf", sum);
}