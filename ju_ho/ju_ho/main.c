#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C, D;
	int a, b, c;
	int sum = 0;
	scanf("%d %d %d", &A, &B, &C);
	scanf("%d", &D);
	sum = A * 3600 + B * 60 + C + D;
	a = sum / 3600;
	if (a >= 24)
	{
		a = a % 24;
	}
	b = sum % 3600 / 60;
	c = sum % 3600 % 60;
	printf("%d %d %d", a, b, c);
	return 0;
}