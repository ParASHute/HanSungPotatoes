#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C, val = 0;
	scanf("%d %d %d", &A, &B, &C);
	val = C - B;
	if (val<=0)
	{
		printf("-1");
	}
	else
	{
		printf("%d", A / val + 1);
	}
	return 0;
}

//for문 사용하면 무조건 1초는 잡고 가야함, 하지만 문제에서 요구하는 시간은 0.35초
//for문 말고 다른 방법 찾아봅시다.


// A는 노트북을 몇대 생산 해도 변하지 않는 고정 지출이고 B는 한대 팔릴때 마다 증가하는 가변 지출이다.
// 한대당 순익 D가 있다고 하자, D = C - B 이다. 
// D가 음수가 되면 몇대를 팔던 절대 순익이 날수 없는 구조이다.
// 고정 지출을 D로 나누면 고정 지출을 회수 할 수 있는 판매량이 나옴
// 하지만 우리가 구해야 하는 정답은 회수가 아닌 순익이 나기 시작하는 구간임
