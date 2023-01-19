#include <stdio.h>  //개짱나는 문제.

int main(void)
{
	int n, m, j, apple, basket, dis = 0;
	scanf("%d %d", &n, &m);
	basket = m;  
	scanf("%d", &j);
	while (j--)
	{
		scanf("%d", &apple);
		if (apple > basket)  //사과 개수가 현재 바구니 위치보다 더 클때
		{
			dis += apple - basket;
			basket = apple;
		}
		else if (apple < basket - (m - 1))
		{
			dis += basket - (m - 1) - apple;
			basket = apple + (m - 1);
		}

	}
	printf("%d", dis);
}