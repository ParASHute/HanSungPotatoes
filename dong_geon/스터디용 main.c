#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	int i, j, len, n = 5, cnt = 0;
	char arr[6][14];
	int check[1001];  //check는 요원 숫자 저장

	for (i = 1; i < 6; i++) {
		
		scanf("%s", arr[i]);
		len = strlen(arr[i]);

		for (j = 0; j < len - 2; j++)
		{
			if (arr[i][j] == 'F') {
				if (arr[i][j + 1] == 'B') {
					if (arr[i][j + 2] == 'I') {
						check[cnt] = i;
						cnt++;  //0인지 아닌지 확인용, 위의 check의 인덱스로도 사용
						break;
					}
				}
			}
		}
	}

	if (cnt == 0)
		printf("HE GOT AWAY!");

	else
	{
		for (i = 0; i < 1001; i++)
		{
			if (check[i] > 0)
				printf("%d ", check[i]);
		}
	}
}		