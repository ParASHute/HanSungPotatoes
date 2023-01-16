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
    int score[8], i, j, max = 0, high[8], sum = 0;
    for (i = 0; i < 8; i++) {
        scanf("%d", &score[i]);
        high[i]=score[i];
    }

    qsort(score, 8, 4, compare);
    for (i = 3; i < 8; i++)
        sum += score[i];
    printf("%d\n", sum);
    for (i = 0; i < 8; i++)
    {
        for (j = 3; j < 8; j++)
        {
            if (score[j] == high[i])
                printf("%d ", i + 1);
        }
    }
}