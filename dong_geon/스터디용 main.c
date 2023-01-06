#include <stdio.h> 
#include <string.h>

int main(void)
{
	int n, i, len, cnt = 0;
	char s[101];
	scanf("%d", &n);
	while (n--)
	{
		int alpha[27] = { 0 };
		scanf("%s", s);
		len = strlen(s);
		if (len == 1)
			cnt++;

		alpha[s[0] - 'a'] = 1;
		for (i = 1; i < len; i++) {
			if (alpha[s[i] - 'a'] == 0)
				alpha[s[i] - 'a'] = 1;
			else
			{
				if (s[i] != s[i - 1])
					break;
			}

			if (i == len - 1)
				cnt++;
		}
		
	}
	printf("%d", cnt);
}


