#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int val = 0;
	int max = 0;
	int maxN = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &val);
		if (val >= max)
		{
			max = val;
			maxN = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d", maxN);
	return 0;
}