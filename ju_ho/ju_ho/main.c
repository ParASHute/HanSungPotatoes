#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fact(int a) {
	if (a <= 1)
	{
		return 1;
	}
	else
		return a * fact(a - 1);
}

int main() {
	int T, N, M;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &N, &M);
		printf("%.0f\n", fact(M) / (fact(M - N) * fact(N)));
	}
	return 0;
}