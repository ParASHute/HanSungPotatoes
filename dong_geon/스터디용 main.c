#include <stdio.h> 

void jinbub(int m, int n) //m을 n진수로
{
	if (n <= 10)
	{
		if (m < n)
			printf("%d", m);
		else {
			jinbub(m / n, n);
			printf("%d", m % n);
		}
	}
	else
	{
		if (m < n)
			printf("%X", m); //대문자 %X는 출력되는 알파벳이 대문자로 나오게함
		else {
			jinbub(m / n, n); 
			printf("%X", m % n);  
		}
	}
}

int main(void)
{
	int m, n, i;
	scanf("%d %d", &m, &n);
	jinbub(m, n);
}
