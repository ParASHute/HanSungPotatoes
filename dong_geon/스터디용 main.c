#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j, len, sum = 0, plus = 1;
	char s[101];
	scanf("%s", s);
	len = strlen(s);
	for (i = len-1; i >= 0; i--)
	{
		if (s[i] == ',') {
			plus = 1;
			continue;
		}
		sum += (plus * (s[i]-'0'));
		plus *= 10;
	}
	printf("%d", sum);
}