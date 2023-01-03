#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, v, count = 0;
	int a[100] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &v);

	for (int i = 0; i < n; i++) {
		if (a[i] == v) {
			count++;
		}
	}

	printf("%d", count);
}