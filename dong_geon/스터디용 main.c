#include <stdio.h>
#include <string.h>

char a[81]={0};
char b[81]={0};
char result[85]={0};

void reverse(char a[])
{
	int i, len;
	len = strlen(a);
	for (i = 0; i < len / 2; i++)
	{
		char temp = a[i];
		a[i] = a[len - 1 - i];
		a[len - i - 1] = temp;
	}
}

void sum(char* a, char* b) {
	int i, longlen, shortlen, plus = 0, sum = 0;
	longlen = strlen(a) >= strlen(b) ? strlen(a) : strlen(b);
	shortlen = strlen(a) <= strlen(b) ? strlen(a) : strlen(b);
	reverse(a);
	reverse(b);

	for (i = 0; i < longlen; i++)
	{
		if (i < shortlen) {  //둘다 값이 있을 떄
			sum = (a[i] - '0') + (b[i] - '0') + plus;
			if (sum > 1)
				plus = 1; //plus는 다음 값 1추가 해야할때 쓰는 변수
			else
				plus = 0;
		}
		else  //둘 중 하나가 없음
		{
			if (a[i] - '0' >= 0) {  //a가 더 길 때
				sum = a[i] - '0' + plus;
				if (sum > 1)
					plus = 1;
				else
					plus = 0;
			}
			else if (b[i] - '0' >= 0) {  //b가 더 길 때
				sum = b[i] - '0' + plus;
				if (sum > 1)
					plus = 1;
				else
					plus = 0;
			}
		}
		result[i] = sum % 2 + '0';
	}

	if (plus == 1)
		result[longlen] = '1';

	reverse(result);
	//쓸모없는 0을 지우는 코드
	int check = 0;
	for (i = 0; i < strlen(result); i++) {
		if (result[i] == '1') {
			check = 1;
			printf("%c", result[i]);
		}
		if (result[i] == '0' && check == 1)
			printf("%c", result[i]);
	}

	if (check == 0)
		printf("0\n");
	else
		printf("\n");
}

int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s %s", a, b);
		for (int i = 0; i < 85; i++)
			result[i] = '\0';
		sum(a, b);
	}
}