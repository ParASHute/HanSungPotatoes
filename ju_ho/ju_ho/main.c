#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int static compare(const void* fir, const void* sec) {
	if (*(int*)fir < *(int*)sec)
		return 1;
	else if (*(int*)fir > *(int*)sec)
		return -1;
	else
		return 0;
}

int main() {
	int N, K;
	int a = 0,count = 0;
	int num[10] = { 0 };
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	qsort(num, N, sizeof(int), compare);
	for (int i = 0; i < N; i++)
	{
		if (K / num[i] != 0) {
			a = K / num[i];
			count += a;
			K = K - (num[i] * a);
		}
		if (K == 0) {
			break;
		}
	}
	printf("%d", count);
	return 0;
}