#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int A, B, N,val = 0,C = 0;
	scanf("%d %d %d", &A, &B, &N);
	if (A % B == 0)
	{
		printf("0");
	}
	else {
		val = A % B;
		for (int i = 0; i < N; i++)
		{
			val = ((val) * 10);
			C = val / B;
			val = val % B;
		}
		printf("%d", C);
	}
	return 0;
}