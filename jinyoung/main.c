#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long a, b, c, sum = 0;

	scanf("%lld %lld", &a, &b);

	if (a < b) {
		c = b;
		b = a;
		a = c;
	}

	sum = a * (a + 1) / 2 - b * (b - 1) / 2;
	printf("%lld", sum);
}