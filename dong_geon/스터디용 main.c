#include <stdio.h>
#include <string.h>
int main() 
{
	int t, i, beauty;
	char n[11];
	scanf("%d", &t);
	while (t--)
	{
		int num[10] = { 0 };
		beauty = 0;
		scanf("%s", n);
		for (i = 0; i < strlen(n); i++)
			num[n[i] - 48]++;

		for (i = 0; i < 10; i++)
		{
			if (num[i] > 0)
				beauty++;
		}
		printf("%d\n", beauty);
	}
}
