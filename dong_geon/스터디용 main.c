#include <stdio.h> 
#include <string.h>

char s[100001];
char t[100001];
int main(void)
{
	int slen, tlen, i;
	while (scanf("%s %s", s, t)!=EOF) {
		slen = strlen(s);
		tlen = strlen(t);
		
		int count = 0;
		for (i = 0; i < tlen; i++)
		{
			if (s[count] == t[i])
				count++;
			if (count == slen) {
				printf("Yes\n");
				break;
			}
		}
		if (count != slen)
			printf("No\n");
	}
}
