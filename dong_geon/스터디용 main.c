#include <stdio.h>

int main(void) 
{
	int n, i, count;
	long long x;
	while (scanf("%d", &n) != EOF) {
		x = 1;
		count = 0;
		while (1) {
			count++;
			if (x % n == 0) {
				printf("%d\n", count);
				break;
			}
			x *= 10;
			x += 1;
			x %= n;
		}
	}
}