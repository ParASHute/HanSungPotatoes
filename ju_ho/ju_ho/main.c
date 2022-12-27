#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C = 0;
	scanf("%d %d %d", &A, &B, &C);
	
	if (B >= C)
	{
		printf("-1");
	}
	for (int i = 1; i <= A+1; i++)
	{
		if (A + B * i == C * i) {
			printf("%d", i + 1);
			break;
		}
	}
	return 0;
}

//for문 사용하면 무조건 1초는 잡고 가야함, 하지만 문제에서 요구하는 시간은 0.35초
//for문 말고 다른 방법 찾아봅시다.
