#include <stdio.h>
#include <string.h> //실버3 큰수 A+B

char a[10005];
char b[10005];
char x[10005];

void reverse(char a[])
{
	int i, len;
	len = strlen(a);
	for (i = 0; i < len / 2; i++)
	{
		char temp = a[i];
		a[i] = a[len - 1 - i];
		a[len - i - 1] = temp;
	}
}
int main(void) 
{
	int i, longlen, shortlen, sum = 0, plus = 0;
	scanf("%s %s", a, b);
	longlen = strlen(a) >= strlen(b) ? strlen(a) : strlen(b);
	shortlen = strlen(a) <= strlen(b) ? strlen(a) : strlen(b);
	reverse(a); reverse(b);
	for (i = 0; i < longlen; i++)
	{
		if (i<shortlen) {  //둘다 값이 있을 떄
			sum = (a[i] - '0') + (b[i] - '0') + plus;
			if (sum > 9)
				plus = 1;
			else
				plus = 0;
		}
		else  //둘 중 하나가 없음
		{
			if (a[i] - '0' >= 0) {
				sum = a[i] - '0' + plus;
				if(sum > 9)
					plus = 1;
				else
					plus = 0;
			}
			else if (b[i] - '0' >= 0) {
				sum = b[i] - '0' + plus;
				if (sum > 9)
					plus = 1;
				else
					plus = 0;
			}
		}
		x[i] = sum % 10 + '0';
	}

	if (plus == 1)
	{
		x[longlen] = '1';
	}

	reverse(x);
	printf("%s", x);
}