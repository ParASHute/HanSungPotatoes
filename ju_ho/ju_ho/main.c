#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, w, h;
	int a, b, c, d;
	int line;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	a = x;
	b = y;
	c = w - x;
	d = h - y;
	line = c > d ? d : c;
	line = line > b ? b : line;
	line = line > a ? a : line;
	printf("%d", line);
	return 0;
}