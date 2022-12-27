#include <stdio.h>

int main(void)  //2438 정답
{
	int t,i,x;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		for (x=0; x<i; x++) 
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}