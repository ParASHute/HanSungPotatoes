#include <stdio.h>
#include <stdlib.h>

int arr[100001];
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
    int n, i;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, 4, compare);
    printf("%d ", arr[0]);
    for (i = 1; i < n; i++) {
        if(arr[i-1]!=arr[i])
            printf("%d ", arr[i]);
    }
}

