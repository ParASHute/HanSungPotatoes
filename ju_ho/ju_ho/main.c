#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char str[55] = { 0 };

int main() {
	int N;
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++)
	{
		fgets(str, 55, stdin);
		printf("%d. %s", i+1, str);
	}
	return 0;
}