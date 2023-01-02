#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N = 0;
	int a, b, c = 0;
	int val[1000] = { 0 };
	int max = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a == b && b == c && a == c) {
			val[i] = 10000 + a * 1000;
		}
		else if (a == b || a == c) {
			val[i] =  1000 + a * 100;
		}
		else if (b == c) {
			val[i] = 1000 + b * 100;
		}
		else if (a > b && a > c) {
			val[i] = a * 100;
		}
		else if (b > a && b > c) {
			val[i] = b * 100;
		}
		else 
			val[i] = c * 100;
		
		if (max < val[i])
		{
			max = val[i];
		}
	}
	printf("%d", max);
	return 0;
}