#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sb, gb, hb, a, b, minb, min;

	scanf("%d", &sb);
	scanf("%d", &gb);
	scanf("%d", &hb);
	scanf("%d", &a);
	scanf("%d", &b);
	minb = sb;
	if (minb > gb) minb = gb;
	if (minb > hb) minb = hb;

	min = a;
	if (min > b) min = b;

	printf("%d", minb + min - 50);
}