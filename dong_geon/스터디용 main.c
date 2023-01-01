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

int main(void)
{
	int n, m[1001], g[1001], i, x = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &m[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &g[i]);
	qsort(m, n, 4, compare);
	qsort(g, n, 4, compare);
	
	for (i = 0; i < n; i++)
	{
		if (m[i] >= g[i])
			x += (m[i] - g[i]);
		else
			x += (g[i] - m[i]);
	}
	printf("%d", x);
}