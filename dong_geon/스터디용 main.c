#include <stdio.h>

int main(void)
{
	int n, f, cnt = 0;
	scanf("%d", &n);
	scanf("%d", &f);
	n /= 100;
	n *= 100;
	while (1) {
		if (n % f == 0)
			break;
		n++;
		cnt++;
	}
	printf("%02d", cnt);
}