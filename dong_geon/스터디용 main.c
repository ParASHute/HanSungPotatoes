#include <stdio.h>

long long gcd(long long x, long long y)  //return 최대공약수
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main(void)
{
	long long i, a, b, mul, x, sum = 10000000000000000;
	long long A = 0, B = 0;
	scanf("%lld %lld", &a, &b);
	mul = a * b;
	if (a == b)
		printf("%lld %lld", a, b);
	else {
		for (i = a; i<=b; i++)
		{
			x = mul / i;
			if (x * i == mul && gcd(x, i) == a) {
				if (sum > i + x) {
					sum = i + x;
					A = i;
					B = x;
				}
			}
		}
		printf("%lld %lld", A, B);
	}
}