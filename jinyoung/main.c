#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, sum;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	sum = a + b + c;
	if (sum != 180) printf("Error");
	else if (a == b && b == c && a == c)printf("Equilateral");
	else if (a != b && b != c && c != a)printf("Scalene");
	else printf("Isosceles");
}