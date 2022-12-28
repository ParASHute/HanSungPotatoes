#include <stdio.h>

int main(void)
{
	int e, f, c, a = 0, b=0, can = 0;
	scanf("%d %d %d", &e, &f, &c);
	a = (e + f) / c;  
	can += a;
	b += a;  //새로운 빈 병 b
	b += (e + f) % c; //빈 병 나머지 있을 수 있음 ex(5,5,3)

	while (1)
	{
		if (b / c >= 1) {
			b -= c;
			b++;
			can++;
		}
		else
			break;
	}
	printf("%d", can);
}

