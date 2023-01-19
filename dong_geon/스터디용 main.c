#include <stdio.h>
#include <stdlib.h>  

//백준에서 동적할당으로 배열의 크기를 잡는 것과 그냥 처음부터 입력값의 최대치만큼 잡는것의
//메모리 차이는 거의 없다. 이유는 무엇일까? 동적할당이 효율적인 것이 아닌건가?

int static compare(const void* first, const void* second)
{
    if (*(int*)first < *(int*)second)
        return 1;
    else if (*(int*)first > *(int*)second)
        return -1;
    else
        return 0;
}
int main()
{
    int n;
    int* a;
    scanf("%d", &n);
    a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qsort(a, n, 4, compare);
    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    free(a);
}