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

int arr[1000001];

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    qsort(arr, n, 4, compare);
    
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}