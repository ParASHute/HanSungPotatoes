#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d, sum, n, max = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);

		if (a <= b) { d = a; a = b; b = d; }
		if (b <= c) { d = b; b = c; c = d; }
		if (a <= b) { d = a; a = b; b = d; }
		if (a <= c) { d = a; a = c; c = d; }

		if (a == b && a == c && b == c) {
			sum = 10000 + a * 1000;
		}
		else if (a != b && a != c && b != c) {
			sum = a * 100;
		}
		else {
			sum = 1000 + b * 100;
		}
		if (max < sum)max = sum;
	}

	printf("%d", max);
}