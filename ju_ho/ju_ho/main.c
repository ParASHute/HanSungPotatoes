#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int a, int b, int c) {
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else
		return c;
}
int main() {
	int a, b, c=0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c && a == c) {
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b || a == c) {
		printf("%d", 1000 + (a) * 100);
	}
	else if (b == c) {
		printf("%d", 1000 + (b)*100);
	}
	else
		printf("%d", max(a, b, c) * 100);
	return 0;
}