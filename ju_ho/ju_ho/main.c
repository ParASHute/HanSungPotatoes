#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() { int a, b, c, d, A, B, C, D; 
	scanf("%d %d %d %d", &a, &b, &c, &d); 
	scanf("%d %d %d %d", &A, &B, &C, &D); 
	if (a + b + c + d >= A + B + C + D) { 
		printf("%d", a + b + c + d); 
	} 
	else { 
		printf("%d", A + B + C + D); 
	} 
	return 0; 
}