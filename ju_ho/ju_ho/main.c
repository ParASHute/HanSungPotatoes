#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}xy;

int static compare(const void* fir, const void* sec) {
	xy F = *(xy*)fir;
	xy S = *(xy*)sec;
	if (F.x > S.x)
		return 1;
	else if (F.x < S.x)
		return -1;
	else {
		if (F.y > S.y)
			return 1;
		else if (F.y < S.y)
			return -1;
		else
			return 0;
	}
}

int main() {
	int N;
	xy arr[100000] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &arr[i].x,&arr[i].y);
	}
	qsort(arr, N, sizeof(xy), compare);
	for (int i = 0; i < N; i++)
	{
		printf("%d %d\n", arr[i].x,arr[i].y);
	}
}