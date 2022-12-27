#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C, val = 0;
	scanf("%d %d %d", &A, &B, &C);
	val = C - B;
	if (val<=0)
	{
		printf("-1");
	}
	else
	{
		printf("%d", A / val + 1);
	}
	return 0;
}