#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d, sum1, sum2;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum1 = a + b + c + d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum2 = a + b + c + d;

	if (sum1 < sum2) sum1 = sum2;
	printf("%d", sum1);
}