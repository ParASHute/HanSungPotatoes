
//1009번 (2/6일)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int a, n;
	double x, y;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%lf %lf", &x, &y);
		n = (int)pow((double)x, (double)y)%10;

		if (n == 0) {
			printf("10\n");
		}
		else {
			printf("%d\n", n);
		}
	}
}
// 주호 피드백
// n값에 들어가기전 pow처리 시 큰 값이 들어갈 가능성 있음 -> 오버플로우 발생해서 엉뚱한 값 들어감
// 그렇다면 n값에 들어가기 전에 규칙성을 찾아 넣는다면? 해결할 수 있음
// 규칙성의 힌트는 예제에 있는 수들의 제곱근을 계산하다보면 찾을 수 있음
