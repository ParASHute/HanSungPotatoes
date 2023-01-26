#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;
	int f = 0;
	int max = -1;
	int str[1003][6] = { { 0 }, { 0 } };  
	int n[1003] = { 0 };
	int num = -1;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	
	for (int i = 0; i < T; i++)
	{
		if (max < str[i][5])
			if (num < i)
			{
				num = i;
				max = str[i][5];
			}
	}
	printf("%d", num + 1);
	return 0;
}