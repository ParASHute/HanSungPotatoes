#include <stdio.h> 

//배열로 풀다가 실패

void yose(int n, int k)
{
    int arr[1001] = { 0 };
    int count = 0, m;
    m = k;
    for (int i = 1; i <= n; i++)
        arr[i] = i;
    while (1)
    {
        if (arr[m] == m) {
            printf("%d, ", m);
            arr[m] = -1;
            m += k;
            count++;
        }
       
  
        if (m > n)
            m = m - n;

        if (count == n)
            break;
    }
}

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    printf("<");
    yose(N, K);
    printf(">");
}
