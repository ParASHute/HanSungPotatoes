#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, z, a;
	while (1)
	{
		scanf("%d %d %d", &x, &y, &z);
		if (x > y && y > z || x > z && z > y)
		{
			a = z;
			z = x;
			x = a;
		}
		else if (y > z && z > x || y > x && x > z)
		{
			a = z;
			z = y;
			y = a;
		}
		if (x == 0 && y == 0 && z == 0)
		{
			break;
		}
		if (x * x + y * y == z * z)
		{
			printf("right\n");
		}
		else 
		{
			printf("wrong\n");
		}
		
	}
	return 0;
}