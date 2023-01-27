#include <stdio.h>

int main(void)
{
	int x, i, j; // i와 j는 반복문
	int cnt = 0, y = 1;  //cnt는 순서 체크, y는 대각선 줄을 의미:초기값 1
	scanf("%d", &x);

	while(1)   //무한반복
	{
		for (i = 1; i <= y; i++) //이 식이 만들어진 이유: 첫번째 대각선에 개수는 1개, 두번째 대각선 2개, 세번째 3개 ...로 이루어짐
		{
			cnt++;
			if (cnt == x) //cnt가 늘다가 x를 만나면 for문에서 break
				break;
		}
		
		if (cnt == x) //위에서 break 되었다면 while문 탈출위한 break
			break;

		y++;  //다음 대각선으로 넘어가는 과정
	}


	if (y % 2 == 0)  // x번째 대각선 x가 짝수면 
		printf("%d/%d", i, y - i + 1);  //탈출 된 시점 기준으로 i, y-i+1이 된다.

	else   //x번째 대각선 x가 홀수면 
		printf("%d/%d", y - i + 1, i);

}