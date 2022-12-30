#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = N-1; j > i ; j--)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}