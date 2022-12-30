#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, n, sum;
	scanf("%d", &n);

	for (int j = 0; j < n; j++) {
		sum = 1;
		scanf("%d %d", &a, &b);
		for (int i = 0; i < b; i++) {
			sum *= a;
			sum %= 10;
		}
		if (sum == 0) printf("10\n");
		else printf("%d\n", sum);
	}
}