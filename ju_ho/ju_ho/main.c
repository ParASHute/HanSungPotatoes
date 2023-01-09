#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int T;
	int R;
	char S[23] = { 0 };
    scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %s", &R, S);
		for (int k = 0; S[k] != '\0'; k++)
		{
			for (int j = 0; j < R; j++)
			{
				printf("%c", S[k]);
			}
		}
		printf("\n");
	}
	return 0;
}