#include <stdio.h>  //오늘의 교훈 쓸데없이 배열을 사용하지말고 간단히 생각하자..

int main(void)
{
	int a, b, n, x;
	scanf("%d %d %d", &a, &b, &n);

	for (int i = 0; i < n; i++)
	{
		a %= b;
		a *= 10;
		x = a / b;	
	}
	printf("%d", x);
	return 0;
}