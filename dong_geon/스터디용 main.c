#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, len;
	char s[1001], change[1001];
	scanf("%s", s);
	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 68 && s[i] <= 90)
			change[i] = (s[i] - 3);
		else
			change[i] = (s[i] + 23);
	}
	change[len] = '\0';
	printf("%s", change);
	return 0;
}