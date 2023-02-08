
//1009번 (2/6일)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int a, x, y, n, z;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d %d", &x, &y);

		n = x % 10;

		if (n = 0) { 
			printf("10");
		}
		if (n = 1) {
			printf("1");
		}
		if (n = 2) {
			int arr1[4] = { 2,4,8,6 };
			z = (y % 4) - 1;
			printf("%d", arr1[z]);
		}
		if (n = 3) {
			int arr[4] = { 3,9,7,1 };
			z = (y % 4) - 1;
			printf("%d", arr[z]);
		}
		if (n = 4) {
			int arr[2] = { 4,6 };
			z = (y % 2) - 1;
			printf("%d", arr[z]);
		}
		if (n = 5) {
			printf("5");
		}
		if (n = 6) {
			printf("6");
		}
		if (n = 7) {
			int arr[4] = { 7,9,3,1 };
			z = (y % 4) - 1;
			printf("%d", arr[z]);
		}
		if (n = 8) {
			int arr[4] = { 8,4,2,6 };
			z = (y % 4) - 1;
			printf("%d", arr[z]);
		}
		if (n = 9) {
			int arr[2] = { 9,1 };
			z = (y %  2) - 1;
			printf("%d", arr[z]);
		}
	}
}
// 주호 피드백
// n값에 들어가기전 pow처리 시 큰 값이 들어갈 가능성 있음 -> 오버플로우 발생해서 엉뚱한 값 들어감
// 그렇다면 n값에 들어가기 전에 규칙성을 찾아 넣는다면? 해결할 수 있음
// 규칙성의 힌트는 예제에 있는 수들의 제곱근을 계산하다보면 찾을 수 있음
/*
민성 피드백 추가
카톡 통해서 보낸 링크 보면 거듭제곱의 1의 자리를 구하는 방법이 나와있음
밑이 3인지 2인지는 문제에 나와 있음
링크에 보낸 식을 코딩으로 구현만 하면 충분히 구할수 있음
1일땐 2일땐 3일땐 찝지 말고 링크에 나온 방법과 식을 변수를 이용해 잘 구현해 보자
추가로 x가 10일떈 x^n(1 < n 인 자연수)는 무조건 0이 나온다.
링크의 글을 보면 밑이 10인 경우를 제외하고는 1의 자리 수가 0이 나오는 경우는 없다
*/
