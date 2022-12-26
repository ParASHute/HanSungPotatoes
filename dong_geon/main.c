#include <stdio.h>


int main(void)
{
	int t, a, b, x;
	scanf("%d", &t);
	for(int j=0; j<t; j++)
	{
		scanf("%d %d",&a, &b);
		x = a;  //x는 곱해야 할 수 고정
		if (b == 1 && a % 10 != 0) {
			printf("%d\n", a % 10);
			continue;
		}

		else {
			for (int i = 1; i < b; i++)
			{
				a *= x;
				a %= 10;
			}
			if (x % 10 != 0)
				printf("%d\n", a);

			else
				printf("10\n");
		}

	}
}