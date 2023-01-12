#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, a = 0, c, d, ans = 1000000, sum;
	int b = 1;
	scanf("%d", &n);

	while (n / b != 0) {
		a++;
		b *= 10;
	}

	c = n;
	d = 9 * a;

	while (1) {
		sum = 0;
		n--;
		int k = 1, x = n;
		for (int k = 0; k < a; k++) {
			sum += x % 10;
			x /= 10;
		}
		if (sum + n == c && ans > n) ans = n;
		if (n == c - d)break;
	}

	if (ans == 1000000) printf("0");
	else printf("%d", ans);
}