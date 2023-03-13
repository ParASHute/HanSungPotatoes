#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int T,count1 = 0,count2 = 0;
	char vps[50] = { '\0' };
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%s", vps);
		getchar();
		for (int j = 0; j < strlen(vps); j++)
		{
			if (vps[j] == '(')
			{
				count1++;
			}
			else
				count2++;
			if (count1 < count2)
			{
				printf("NO\n");
				break;
			}
		}
		if (count1 == count2)
		{
			printf("YES\n");
		}
		else if (count1 > count2) printf("NO\n");
		count1 = 0;
		count2 = 0;
	}
	return 0;
}