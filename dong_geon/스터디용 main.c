#include <stdio.h>

int gcd(int x, int y) //유클리드 호제로 최대공약수 빠르게
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main(void) 
{
	int a, b, c, d, i, g;   //  a/b + c/d
	int x, y;  // 기약분수 y/x
	int abgcd, cdgcd;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	abgcd = gcd(a, b);
	cdgcd = gcd(c, d);
	if (abgcd != 1) {  //약분
		a /= abgcd;
		b /= abgcd;
	}
	if (cdgcd != 1) {  //약분
		c /= cdgcd;
		d /= cdgcd;
	}
	
	x = b * d;   //분모
	y = a * d + b * c;   //분자

	while (1) {
		g = gcd(x, y);

		if (gcd(x, y) == 1) {  //최대공약수가 1이면 기약분수인 특징를
			printf("%d %d", y, x);
			return 0;
		}

		x /= g;
		y /= g;
	}
}