#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int B;
	int a;
	int count = 0;
	int div[100];
	for (int k = 0; k < 10; k++)
	{
		scanf("%d", &B);
		div[k] = B % 42;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++) {
			if (div[i] > div[j])
			{
				a = div[i];
				div[i] = div[j];
				div[j] = a;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (div[i] != div[i + 1]) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}