#include <stdio.h>
#include <string.h>  //실버3 큰수 A+B

char x[1000001] = { 0 };
int func(char *x,int len)
{
	int sum = 0, i;
	for (i = 0; i < len; i++)
		sum += x[i] - 48;

	//printf("%d\n", sum);
	return sum;
}

int func2(int z)
{
	int sum = 0;
	while (z)
	{
		sum += z % 10;
		z /= 10;
	}
	//printf("%d\n", sum);
	return sum;
}


int main() 
{
	int count = 0, len, y;
	scanf("%s", x);
	len = strlen(x);
	if (len == 1)
		count -= 1;
	y = func(x,len);
	while (1) {
		if (y < 10)
			break;
		else
		{
			y = func2(y);
			count++;
		}
	}
	if (y % 3 == 0 && y != 0)
		printf("%d\nYES", count+1);
	else
		printf("%d\nNO", count+1);
}