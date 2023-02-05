#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int static compare(const void* fir, const void* sec) {
	if (*(int*)fir > *(int*)sec)
		return 1;
	else if (*(int*)fir < *(int*)sec)
		return -1;
	else
		return 0;
}

int binsearch(int A[], int n, int key) {
	int low, high;
	int mid;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (key == A[mid]) {            //탐색 성공
			return 1;
		}
		else if (key < A[mid]) {        //탐색 범위를 아래쪽으로
			high = mid - 1;
		}
		else if (key > A[mid]) {        //탐색 범위를 위쪽으로
			low = mid + 1;
		}
	}
	return 0;                            //탐색 실패
}


int main() {
	int N, M,B,count = 0;
	int A[100000] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	qsort(A, N, sizeof(int), compare);
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &B);
		printf("%d\n",binsearch(A, N, B));
	}

	return 0;
}