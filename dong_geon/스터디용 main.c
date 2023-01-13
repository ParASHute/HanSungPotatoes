#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c;  //c가 가장 긴 변
	int n = 1;
	while (1) {
		scanf("%lf %lf %lf", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a < 0) {
			a = sqrt(pow(c, 2.0) - pow(b, 2.0));
			if (c < a + b) {
				printf("Triangle #%d\n", n);
				printf("a = %.3lf\n\n",a);
			}
			else {
				printf("Triangle #%d\n", n);
				printf("Impossible.\n\n");
			}
		}
		if (b < 0) {
			b = sqrt(pow(c, 2.0) - pow(a, 2.0));
			if (c < a + b) {
				printf("Triangle #%d\n", n);
				printf("b = %.3lf\n\n", b);
			}
			else {
				printf("Triangle #%d\n", n);
				printf("Impossible.\n\n");
			}
		}
		if (c < 0) {
			c = sqrt(pow(a, 2.0) + pow(b, 2.0));
			if (c < a + b) {
				printf("Triangle #%d\n", n);
				printf("c = %.3lf\n\n", c);
			}
			else {
				printf("Triangle #%d\n", n);
				printf("Impossible.\n\n");
			}
		}
		
		n++;

	}

}