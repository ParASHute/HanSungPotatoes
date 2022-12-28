#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long A, B = 0;
	scanf("%lld %lld", &A, &B);
	if (A > B) {
		printf("%lld", (A - B + 1) * (A + B) / 2);
	}
	else {
		printf("%lld", (B - A + 1) * (A + B) / 2);
	}
	return 0;
}