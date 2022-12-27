#include <stdio.h>

void change(int *x, int *y)  //포인터 주소값으로 값 변경
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int m, x, y, ball = 1;  //공 초기위치 1
	scanf("%d", &m);
	while (m--) {
		scanf("%d %d", &x, &y);

		if (x==ball) { //만약 x 컴이 공이라면 
			change(&x, &y);  //x와 y의 위치를 바꾸고 x=1,y=2 에서 x=2,y=1 과정
			ball = x;   //공은 x자리에 있게되는 것. (x=2)
		}
		if (y == ball) {
			change(&x, &y);
			ball = y;
		}
	}
	printf("%d", ball);
}

// 포인터를 굳이 써야 했을문제일까...
