#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[55];
	int i, j, len, sum = 0;
	scanf("%s", s);
	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
		{
			j = i;
			while (1)
			{
				if (j + 2 >= len)
					break;

				if (s[j + 1] == '+')
					s[j + 1] = '-';

				if (s[j + 2] == '-')
					break;

				j++;
			}
		}
	}
	for (i = 0; i < len; i++)  //55-50-40
	{
		printf("%c", s[i]);
	}
}

//str2int ->str[0]*10 + str[1]*10^1 + ... srt[n-1]*10^n
//	-> 짜르는 부분으로 n을 초기화 -> inte[] -> 배열에 입력
