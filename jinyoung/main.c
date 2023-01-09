#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[15];
	int count = 0, c;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		a[i] %= 42;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (a[i] > a[j]) {
				c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] != a[i + 1]) count++;
	}
	printf("%d", count);
}