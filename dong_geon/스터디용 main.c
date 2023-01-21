#include <stdio.h>

unsigned long long pt[21];  //unsigned long long은 0에서 18,446,744,073,709,551,615 까지

void pac(unsigned long long n)  
{
	pt[0] = 1;
	pt[1] = 1;
	pt[2] = 2;

	if (n == 0) {
		printf("NO");
		return 0;
	}
	for (int i =3; i < 21; i++)  //20! 까지 배열에
		pt[i] = pt[i-1]*i;  


	for (int i = 20; i >= 0; i--)  // n이 서로 다른 정수의 팩토리얼 합이므로 n이 pt[i]! 크면 뺴준다. 
	{
		if (pt[i] <= n)  
			n -= pt[i];
	}

	if (n == 0)    //마지막까지 빼진 값이 0으로 떨어지면 그 수는 팩토리얼의 합으로 더할 수 있는 정수였던 것이다.
		printf("YES");
	else
		printf("NO");
}

int main()
{
	unsigned long long n;
	scanf("%llu", &n);
	pac(n);
	
}