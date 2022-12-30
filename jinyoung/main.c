#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, sum1, sum2 = 0, n = 0;
	scanf("%d %d %d", &a, &b, &c);

	sum1 = a;
	if (b >= c) printf("-1\n");
	else {
		n = a / (c - b) + 1;
		printf("%d", n);
	}
}