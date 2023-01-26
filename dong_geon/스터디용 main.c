//실버 입성 축하합니다!~@~! 

//첫번째 풀이는 다이나믹 프로그래밍 입니다.
//어차피 n과 m이 30미만이니 그만큼의 조합 개수를 dp테이블에 넣어줍니다.
//dp의 점화식은   n C m = (n-1) C (m-1) + (n-1) C m (조합의 공식)을 이용해줍니다.
//                   ==같은 표현 C(n, m) = C(n-1, m) + C(n-1, m-1)

#include <stdio.h>
int dp[30][30] = { 0 };

int func(void)
{
	int i, j;
	for (i = 0; i < 30; i++) {  //이 과정은 dp의 초기단계인 초기값 설정입니다. 초기값을 설정해줘야 그 다음 dp 테이블을 쌓을 수 있습니다.
		dp[i][0] = 1;    //n C 0 은 모두 1 입니다. ex)  3 C 0 = 1 ,   14 C 0 = 1
		dp[i][1] = i;    //n C 1 은 모두 n 입니다. ex)  2 C 1 = 2 ,   14 C 1 = 14
	}

	for (i = 2; i < 30; i++)  //C(n, m) = C(n-1, m) + C(n-1, m-1) 을 만족시켜주기 위한 2중 for문 입니다. 어렵게 생각할 필요 없습니다.
	{
		for (j = 2; j < 30; j++)
		{
			if(i>=j)  //i가 j보다 작은 조합의 경우는 없습니다. 문제 조건에도 0<N<=M<30 입니다.
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];  // n C m = (n-1) C (m-1) + (n-1) C m
		}
	}
}

int main(void)
{
	int t, n, m;
	scanf("%d", &t);
	func(); //함수를 void 형태로 실행 (자동으로 값이 들어감)
	while (t--)
	{
		scanf("%d %d", &n, &m);
		printf("%d\n", dp[m][n]);
	}
}


//두번째 풀이는 주호님 민성님이 푼 방법 그대로 조합을 계산하는겁니다 

#include <stdio.h>
int main(void) 
{
	int T, i;  //반복문 변수
	int n, m;  //문제의 주어진 변수
	int result;  //구해야 하는 조합의 수
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &n, &m);  //n=13, m=29   -> 29 C 13  
		result = 1;  //매번 1로 초기화 해주어야 함
		for (i = 0; i < n; i++)
		{
			result *= m - i;
			result /= 1 + i;
		}
		printf("%d\n", result);
	}
	return 0;
}
	