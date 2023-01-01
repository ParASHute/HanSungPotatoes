#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("*");
		for (int t = 0; t < i; t++) {
			printf("*");
		}
		printf("\n");
	}
}