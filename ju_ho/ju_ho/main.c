#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int H, M;
	int val=0;
	scanf("%d %d", &H, &M);
	if (M<45)
	{
		val = 60 - (45 - M);
		if (H == 0)
		{
			printf("23 %d", val);
		}
		else
		{
			printf("%d %d", H - 1, val);
		}
	}
	else
	{
		printf("%d %d", H, M - 45);
	}
	return 0;
}