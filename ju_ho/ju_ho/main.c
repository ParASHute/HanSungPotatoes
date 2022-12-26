#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int n) {
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return 1;
	}
	return n * fact(n - 1);
}
int main() {
	int x;
	scanf("%d", &x);
	printf("%d", fact(x));
	return 0;
}