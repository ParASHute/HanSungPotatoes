#include <stdio.h>

int main(void)
{
	int x, s = 64, stick = 0, cnt = 0;
	scanf("%d", &x);
	while (1)
	{
		if (s <= x-stick) {
			stick += s;
			cnt++;
		}	

		if (stick == x) {
			printf("%d", cnt);
			break;
		}

		s /= 2;
	}
}