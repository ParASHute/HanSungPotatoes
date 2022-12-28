#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int M, X, Y;
	int cup = 1;
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &X, &Y);
		if (X == cup)
			cup = Y;
		else if (Y == cup)
			cup = X;
	}
	printf("%d", cup);
	return 0;
}