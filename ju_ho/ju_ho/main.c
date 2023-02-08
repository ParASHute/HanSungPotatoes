#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>


int main() {
	int N, K, a = 1, k = 0;
	int arr[1001] = { 0 };
	scanf("%d %d", &N, &K);
	for (int i = 2; i <= N; i++)
	{
		for (int j = i; j <= N; j+=i)
		{
			arr[k] = j;
			for (int q = 0; q < k; q++)
			{
				if (arr[q] == j) {
					arr[q] == 0;
					k--;
					break;
				}
			}
			k++;
		}
	}
	printf("%d", arr[K-1]);
	return 0;
}