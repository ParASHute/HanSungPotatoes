#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[1002] = { 0 };
int b[1002] = { 0 };

int main() {
	int N, K, A, j = 0, B;
	int count = 0;
	scanf("%d %d", &N, &K);
	A = K;
	B = N;
	for (int i = 0; i < N; i++)
	{
		a[i] = i + 1;
	}
	printf("<");
	while (j < N)
	{
		for (int i = 0; i < N; i++) {
			if (K == a[i]) {
				b[j] = a[i];
				a[i] = 0;
				K += A;
				printf("%d, ", b[j]);
				j++;
			}
			if (K > N)
			{
				if (a[K-1] == a[i])
				{
					if (a[i] != 0) {
						b[j] = a[i];
						a[i] = 0;
						K += A;
						printf("%d", b[j]);
						if (j < N-1)
						{
							printf(", ");
						}
						j++;
					}
				}
			}
			if (a[i] != 0)
			{
				a[N + count] = a[i];
				count++;
			}
		}
	}
	printf(">");
	return 0;
}