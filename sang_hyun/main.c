
//1009번 (2/6일)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int a, n;
	double x, y;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%lf %lf", &x, &y);
		n = (int)pow((double)x, (double)y)%10;

		if (n == 0) {
			printf("10\n");
		}
		else {
			printf("%d\n", n);
		}
	}
}
