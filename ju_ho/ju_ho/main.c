#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int resum(int k, int n) {
	if (k==0 || n == 1)
	{
		return n;
	}
	return resum(k - 1, n) + resum(k, n - 1);
}

int main() {
	int T;
	int k, n;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", resum(k, n));
	}
	return 0;
}