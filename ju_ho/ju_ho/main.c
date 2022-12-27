#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B = 0;
	scanf("%d %d", &A, &B);
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);
	return 0;
}