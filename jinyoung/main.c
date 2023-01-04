#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count = 0;
	char a[10][10];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%c", &a[i][j]);
		}
	}

	for (int i = 0; i < 7; i += 2) {
		for (int j = 0; j < 7; j += 2) {
			if (a[i][j] == 'F') count++;
		}
	}

	for (int i = 1; i < 8; i += 2) {
		for (int j = 1; j < 8; j += 2) {
			if (a[i][j] == 'F') count++;
		}
	}

	printf("%d", count);
}