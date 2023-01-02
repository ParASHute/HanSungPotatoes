#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M;
	int sum = 0;
	scanf("%d %d", &N, &M);
	sum = N - 1 + (M-1)*(N);
	printf("%d", sum);
	return 0;
}