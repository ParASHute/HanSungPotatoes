#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, max = 0, a = 0;
	int t[50] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &t[i]);
	}

	for (int i = 0; i < n; i++) {
		if (max < t[i]) {
			max = t[i];
			a++;
		}
	}

	printf("%d\n", a);

	a = 0; max = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (max < t[i]) {
			max = t[i];
			a++;
		}
	}
	printf("%d\n", a);
}