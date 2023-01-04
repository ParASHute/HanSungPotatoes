#include <stdio.h> 
#include <string.h>
//문제 자체는 크게 어렵지 않은데 아스키코드와 문자열간의 관계를 잘 확인하면서 풀어야 하는 문제
char arr[333334] = { 0 };
int main(void)
{
	int len, i;
	scanf("%s", arr);
	len = strlen(arr);
	//첫번째는 0으로 시작하면 안되기에 따로 출력해줘야함 ex) 314 에서 3은 011 인데 출력은 11로 
	if (arr[0] - '0' < 2)  //0,1  
		printf("%d", arr[0] - '0');
	else if (arr[0] - '0' < 4) //2,3
		printf("1%d", (arr[0] - '0') % 2);
	else if (arr[0]- '0' < 8)//4,5,6,7
	{
		if (arr[0] - '0' < 6)
			printf("10%d", (arr[0] - '0') % 2);
		else
			printf("11%d", (arr[0] - '0') % 2);
	}
 //8진수의 2번째문자부터 8진수로 전환해줌.
	for (i = 1; i < len; i++)
	{
		if (arr[i] - '0' < 2) 
			printf("00%d", arr[i] - '0');
		else if (arr[i] - '0' < 4) 
			printf("01%d", (arr[i] - '0') % 2);
		else if (arr[i]- '0' < 8)
		{
			if (arr[i] == '4' || arr[i] == '5')
				printf("10%d", (arr[i] - '0') % 2);
			else
				printf("11%d", (arr[i] - '0') % 2);
		}
	}
}



