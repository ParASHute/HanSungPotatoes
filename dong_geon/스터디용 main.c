#include <stdio.h>
#include <stdlib.h>

int N[1000001] = { 0 };  //이게 반복문 while 안에 있어야 초기화 되는거 아닌가?
int M[1000001] = { 0 };  //초기화 안하고도 통과가 되네? 

int static compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main(void)
{
	int t, n, m, i;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &n, &m);
		for (i = 0; i < n; i++)
			scanf("%d", &N[i]);
		for (i = 0; i < m; i++)
			scanf("%d", &M[i]);
		qsort(N, n, 4, compare);
		qsort(M, m, 4, compare);
		if (N[n - 1] >= M[m - 1])
			printf("S\n");
		else
			printf("B\n");
	}
}