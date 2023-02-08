
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
정답
int a, x, y, n;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %d", &x, &y);
		x = x % 10;
		if (x = 10) { 
			n = 10;
		}
		else{
			if (x = 2) {
				int arr[4] = { 6,2,4,8 };
				n = arr[(y % 4)];
			}
			if (x = 3) {
				int arr[4] = { 1,3,9,7 };
				n = arr[(y % 4)];
			}
			if (x = 4) {
				int arr[2] = { 6,4 };
				n = arr[(y % 2)];
			}
			if (x = 5) {
				n = 5;
			}
			if (x = 6) {
				n = 6;
			}
			if (x = 7) {
				int arr[4] = { 1,7,9,3 };
				n = arr[(y % 4)];
				printf("%d", arr[z]);
			}
			if (x = 8) {
				int arr[4] = { 6,8,4,2 };
				n = arr[(y % 4)];
			}
			if (x = 9) {
				int arr[2] = { 1,9 };
				n = arr[(y %  2)];
			}
		}
	}
	printf("%d", n);
}
// 재목 처럼 글한번 다시 한번 잘 읽어보자
// 지수를 나눠서 처리한 담에 나머지가 0일땐 글에 올라온 대로 라면 마지막에 해당하는 수 이다(예를 들어 2의 경우 4자리 마다 반복 되고 y%4 == 0 일떈 마지막 자리인 6이다.
// 하지만 z = (y %  4) - 1; printf("%d", arr[z]); 처리를 하면 y % 4가 0일때 z는 -1이 되고 arr[-1]은 존재 하지 않음 -> 컴파일 오류
*/
