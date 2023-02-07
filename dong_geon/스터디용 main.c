#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second)
{
    if (*(int*)first < *(int*)second)
        return 1;
    else if (*(int*)first > *(int*)second)
        return -1;
    else
        return 0;
}

int main(void)
{
    int k, w = 0, r[100001], count = 1;
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
		scanf("%d", &r[i]);
	qsort(r,k,4,compare);
    for (int i = 0; i < k; i++)
    {
        if (w < r[i] * count)
            w = r[i] * count;
        count++;
    }
    printf("%d", w);
}