#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char N[11];
	int i, j;
	int sum1 = 1, sum2 = 1;

	scanf("%s", N);
	for (int k = 0; k < strlen(N) - 1; k++) {
		int b = strlen(N) - 1;
		for (i = strlen(N) - 1; i > k; i--)
		{
			sum1 *= (N[b] - '0');  // 이렇게 처리해줘도 됩니다. 
			b--;
		}
		for (j = 0; j <= k; j++) {
			sum2 *= (N[j] - 48);  // 0이 아스키코드 값이 48이라 같은 표현  
		}
		if (sum1 == sum2)
		{
			printf("YES");
			return 0;
		}
		sum1 = 1;
		sum2 = 1;
	}
	printf("NO");
	return 0;
}

//동건피드백
//문제는 너무 잘 풀었는데 코드에 안쓰는 변수들이 넘 많아요.
//코드에서 필요없는 변수들 지우고 기존 14줄,48줄 간단하게 구현하는 방법을 제안해봤어요.
