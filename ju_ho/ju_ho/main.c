#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sum, val; 
	int x, y;
	scanf("%d %d", &sum, &val);
	if ((sum+val)%2 == 1 || sum < val)
	{
		printf("-1");
	}
	else
	{
		x = (sum + val) / 2;
		y = sum - x;
		printf("%d %d", x, y);
	}
	return 0;
}