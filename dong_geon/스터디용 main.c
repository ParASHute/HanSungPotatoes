#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
int main() {
	int n, m, i;
	int* a;
	scanf("%d %d", &n, &m);
	a = (int*)malloc(sizeof(int) * (n + m));
	for (i = 0; i < n + m; i++)
		scanf("%d", &a[i]);
	qsort(a, n + m, 4, compare);
	for (i = 0; i < n + m; i++)
		printf("%d ", a[i]);
}