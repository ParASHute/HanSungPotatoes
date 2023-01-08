#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, len, leftsum = 0, rightsum = 0;
	char s[9];
	scanf("%s", s);
	len = strlen(s);
	for (i = len / 2 - 1; i >= 0; i--)
		leftsum += (s[i] - '0');
	for (i = len / 2; i < len; i++)
		rightsum += (s[i] - '0');

	if (leftsum == rightsum)
		printf("LUCKY");
	else
		printf("READY");
}