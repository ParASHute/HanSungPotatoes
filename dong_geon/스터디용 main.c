#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, len;
	char s[101], rot[101];
	fgets(s, 101, stdin);
	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 65 && s[i] <= 77)
			rot[i] = s[i] + 13;
		else if (s[i] >= 78 && s[i] <= 90)
			rot[i] = s[i] -13;
		else if (s[i] >= 97 && s[i] <= 109)
			rot[i] = s[i] + 13;
		else if (s[i] >= 110 && s[i] <= 122)
			rot[i] = s[i] -13;
		else
			rot[i] = s[i];
	}
	rot[len] = '\0';
	printf("%s", rot);
}