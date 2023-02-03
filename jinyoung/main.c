#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[1000] = { 0 };	//n의 범위가 1000이므로 1000짜리 배열 선언

int main() {
	int n, k, count = 0;	// 조건에 주어진 n,k 몇번째 인지 샐 count 선언

	scanf("%d %d", &n, &k);

	printf("<");	// 출력형식
	for (int i = 0; i < n; i++) {	//전체를 n번만큼 반복해서 n개 출력
		for (int j = 0; j < k; j++) {	// k번만큼 count를 증가
			count++;	//k번만큼 카운트를 증가
			if (count == n)count = 0;	//count가 n이 되면 0으로 초기화
			else count %= n;	// count가 n보다 커졌을 때를 방지하기 위해 n으로 나눈 나머지 값으로 계속 초기화
			while (a[count] == 1) {		//배열 a의 주소가 count인 곳의 값이 1 이면, 추가로 count를 증가시키고, %n해줌.
				count++;
				count %= n;
			}
		}
		if (a[count] == 1)count++; // 위 코드가 한번 실행 됬을 때의 값이 이미 한번 출력 된 값일 경우를 대비하여 count를 증가
		if (count == 0)printf("%d", n); //계속 % n을 해주었기 때문에, 출력할 값이 n일때는 0이 출력 되므로, 0 대신 n을 출력
		else printf("%d", count); //구한 값을 출력
		if (i < n - 1) printf(", ");	//출력형식
		a[count]++; //출력한 count 값에 해당하는 배열 a의 값을 1 증가
	}
	printf(">");	//출력형식
}