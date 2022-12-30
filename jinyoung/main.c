#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int L, p, sum, a, b, c, d, e;
	scanf("%d %d", &L, &p);
	sum = L * p;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	printf("%d %d %d %d %d\n", a - sum, b - sum, c - sum, d - sum, e - sum);
}