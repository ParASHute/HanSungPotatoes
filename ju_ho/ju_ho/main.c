#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000

int max(int A, int B) {
	if (B == 0)
		return A;
	return max(B, A % B);
}
int main() {
	int T, A, B, val, ans;
	int c[MAX] = { 0 };
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		val = A * B;
		c[i] = val / max(A, B);
	}
	for (int j = 0; j < T; j++)
	{
		ans = c[j];
		printf("%d\n", c[j]);
	}
	return 0;
}