#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;
	int H, W, N;
	int X, Y;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		X = N % H;
		Y = N / H +1;
		if (X == 0)
		{
			X = H;
			Y = Y - 1;
		}
		if (Y<10)
		{
			printf("%d0%d\n", X, Y);
		}
		else
			printf("%d%d\n", X, Y);
	}
	return 0;
}