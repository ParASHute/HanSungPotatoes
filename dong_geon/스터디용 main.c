#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int arr[500001] = { 0 };
int choibeen[8002] = { 0 };
int cnt[8002] = { 0 };
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
    int n, i, max = -4001, min = 4001, many = 0, x = 0;
    double sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += (int)arr[i];      //산술평균
        if (arr[i] >= 0) {
            choibeen[arr[i]]++;     //최빈값
        }
        else
            choibeen[abs(arr[i]) + 4000]++;  //음수-1은  choibeen[4001]부터 

        if (max < arr[i])       //범위1
            max = arr[i];
        if (min > arr[i])       //범위2
            min = arr[i];
    }
    qsort(arr, n, 4, compare);    //중앙값

    for (i = 0; i < 8001; i++)
    {
        if (choibeen[i] > many) {
            many = choibeen[i];  //many = 가장 많이 나온 숫자의 개수 
        }
    }

    for (i = 0; i < 8001; i++)  //가장 많이 나온 인덱스 i를 cnt에 0부터 저장
    {
        if (many == choibeen[i]) {
            if (i > 4000)
                cnt[x] = -1 * (i - 4000); //4001부터 음수로 저장
            else
                cnt[x] = i;
            x++;
        }
    }
    qsort(cnt, x, 4, compare);
  


    if (round(sum / n) == 0)
        printf("0\n");
    else
        printf("%.0lf\n", round(sum / n));

    printf("%d\n", arr[n / 2]);
   
    if (x==1)
        printf("%d\n", cnt[x-1]);
    else
        printf("%d\n", cnt[1]);

    printf("%d\n", abs(max - min));
}