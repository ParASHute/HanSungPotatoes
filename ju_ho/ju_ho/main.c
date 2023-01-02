#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N,a,b=1,sum = 0;
	int val[100] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a);
		val[i] = a;
	}
	for (int i = 0; i < N; i++)
	{
		if (val[i] == 1)
		{
			sum += b;
		}
		else if (val[i] == 0)
		{
			b=1;
		}
		if (val[i] == 1 && val[i + 1] == 1) {
			b++;
		}
	}
	printf("%d", sum);
	return 0;
}