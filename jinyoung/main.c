#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, sum = 0, a = 1;
	int s[100] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
	}
	for (int i = 0; i < n; i++) {
		if (s[i] == 1) sum += a;
		if (s[i] == 1 && s[i + 1] == 1) {
			a++;
		}
		if (s[i] == 0)a = 1;
	}

	printf("%d", sum);
}