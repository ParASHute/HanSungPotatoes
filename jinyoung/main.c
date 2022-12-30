#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) { d = a; a = b; b = d; }
	if (b > c) { d = b; b = c; c = d; }
	if (a > b) { d = a; a = b; b = d; }
	if (a > c) { d = a; a = c; c = d; }
	printf("%d %d %d", a, b, c);
}