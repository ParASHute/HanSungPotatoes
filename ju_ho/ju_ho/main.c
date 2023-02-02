#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char str[100][60];
char num[200][60];


int main() {
	int n, count = 0;
	char arr;
	while (1) {
		int num1[200] = { 0 };
		scanf("%d", &n);
		// 여기에 getchar(); 들어가야됨
		while (getchar() != '\n');
		count++;
		if (n == 0)
		{
			break;
		}
		for (int i = 0; i < n; i++)
		{
			fgets(str[i], 60, stdin);
		}
		//여기서 이름 받고
		for (int i = 0; i < n; i++)
		{
			scanf(" %[^\n]s", num[i]);
		}
		// 여기서 번호 받고
		if (n == 1) 
			// n이 1 일떄랑 아닐떄 굳이 나눠야 하나 그냥 n 하면 n이 1이고 i는 0부터 돌아가는 코드기 때문에 굳이 상관 없음
			// 그 외에도 1일땐 무조건 그걸 잃어 버리는거라 위에서 번호만 받고 그냥 그대로 str[0]만 출력하면 되서 굳이 두번쨰 부분을 잡아줄 필요 없음
		{
			for (int i = 0; i < 1; i++)
			{
				scanf(" %[^\n]s", num[i + n]);
				num1[num[i + n][0] - 49] = 1;
			}
		}
		else {
			for (int i = 0; i < n - 1; i++)
			{
				scanf(" %[^\n]s", num[i + n]);
				num1[num[i + n][0] - 49] = 1;
			}
		}
		for (int i = 0; i < n; i++) // 여기 반복문 살릴려면 n으로 받아야 되고 
		{
			if (num1[i] == 0)
			{
				printf("%d %s", count, str[i]);
			}
		}
	}
	return 0;
}

//결론 : 1. 찝어야 될떄서 안찝고 엉뚱한대서 찝는 경우가 많음 -> 이경우에는 시간이 쌓이는것 같음
//	2. 그 외 차이라고 한다면 문자열 받는 차이
//	3. 시간 초과가가 난다고 해서 무조건 '시간만 문제다'는 아니다. 반례가 나오는 부분을 입력하기전에 출력에서 시간 초과가 나는 경우도 생각해야함 이 경우에는 오답이 아닌 시간초과로 나오는듯 하다
