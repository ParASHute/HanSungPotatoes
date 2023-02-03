#include <stdio.h>

int main() {
	char d[7][4] = { "SUN","MON","TUE","WED" ,"THU" ,"FRI" ,"SAT" };
	int i, x, y, day = 0;
	scanf("%d %d", &x, &y);
	if (x > 1) {
		day += 31;
		for (i = 2; i < x; i++)
		{
			if (i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
				day += 31;
			else if (i == 2)
				day += 28;
			else
				day += 30;
		}
	}
	day += y;
	printf("%s", d[day % 7]);
}