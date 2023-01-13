#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	int len, i,j, count[92] = { 0 };   //배열의 크기가 92인이유는 아스키 A부터 Z까지 (65~92) 개수를 넣어줄 것임.
	char arr[1000001];
	scanf("%s", arr);
	len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		if (arr[i] >= 97)  // 소문자 일 때
			arr[i] = toupper(arr[i]);  //대문자로 바꿔줍니다
	}
	for (i = 0; i < len; i++)
	{
		count[arr[i]]++;    
	}
	int max = 0;
	for (i = 65; i < 91; i++)
	{
		if (max < count[i]) {  
			max = count[i];  //개수
			j = i;   //알파벳의 아스키코드
		}
	}
	for (i = 65; i < 91; i++)
	{
		if (i != j)
		{
			if (count[i] == count[j]) {
				printf("?");
				return 0;
			}
		}
	}
	printf("%c", j);
	return 0;
}