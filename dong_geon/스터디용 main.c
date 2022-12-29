#include <stdio.h>

//2783 삼각김밥 정답.c

int main(void)
{
	int i, n;
	double a[101], b[101], x, y, min = 1000000;
	scanf("%lf %lf", &x, &y);
	if (min > x / y * 1000)
		min = x / y * 1000;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf %lf", &a[i], &b[i]);
		if (min > a[i] / b[i] * 1000)
			min = a[i] / b[i] * 1000;
	}
	printf("%.2lf",min);
}

//문제에 쓸데없는 말이 너무 많다. 그냥 그램당 가격 가장 작은애 골라주면 되는 문제.