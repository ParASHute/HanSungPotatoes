#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int X, Y, N = 0;
	float div,val = 0;
	scanf("%d %d", &X, &Y);
	scanf("%d", &N);
	val = X * 1000.0 / Y;
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &X, &Y);
		div = X * 1000.0 / Y;
		if (val >= div)
			val = div;
	}
	printf("%0.2f", val);
	return 0;
}