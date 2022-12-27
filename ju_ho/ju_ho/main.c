#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C = 0;
	scanf("%d %d %d", &A, &B, &C);
	
	if (B >= C)
	{
		printf("-1");
	}
	for (int i = 1; i <= A+1; i++)
	{
		if (A + B * i == C * i) {
			printf("%d", i + 1);
			break;
		}
	}
	return 0;
}