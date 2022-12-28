#include <stdio.h>

int change(int x, int y) //포인터 안쓰고 하기!
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	return x;  //공의 위치 리턴
}
int change2(int y, int x)  
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	return x;
}

int main(void)
{
	int m, x, y, ball = 1;  //공 초기위치 1
	scanf("%d", &m);
	while (m--) {
		scanf("%d %d", &x, &y);

		if (x==ball) { 
			ball = change(x,y); 
			continue;
		}
		if (y == ball) {
			ball = change2(x, y);
		}
	}
	printf("%d", ball);
}

