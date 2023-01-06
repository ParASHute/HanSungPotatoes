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
    int n, i, time[1001], sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &time[i]);
	qsort(time, n, 4, compare);
    
    sum += time[0];
    for (i = 1; i < n; i++)
    {
        time[i] += time[i - 1];

        sum += time[i];
    }
    printf("%d", sum);
}