#include <stdio.h>

int main(void)
{
	int n, m, i, check;
	scanf("%d", &n);
	
	while (1)
	{
		check = 0;
		m = n;
		while (m != 0) {  // 정수에 7혹은 4가 들어있는지 1의 자리 수 부터 검사
			if (m % 10 != 7 && m % 10 != 4) {  
				check = 0;
				break;
			}
			else
				check = 1;
			m /= 10;
		}
		if (check == 1) {
			printf("%d", n);
			break;
		}
		else
			n--;
	}
}