#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, a, max, min;

	scanf("%d", &n);

	scanf("%d", &a);
	max = a;
	min = a;
	for (int i = 0; i < n - 1; i++) {
		scanf("%d", &a);
		if (max < a) max = a;
		if (min > a) min = a;
	}
	printf("%d\n", min * max);
}