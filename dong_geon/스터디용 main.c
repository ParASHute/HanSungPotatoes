#include <stdio.h>
#include <string.h> //so easy 한 문제

int main(void)
{
	int i, index = 0;
	char s[101], name[101] = { 0 };
	scanf("%s", s);
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z'){ //그냥 대문자면 출력..
			printf("%c", s[i]);
		}
	}
}