#include <stdio.h>
#include <stdlib.h>

int arr[1000001];
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
	int n, i;
	int a, b, c, max = 0; //a가 가장 긴 변 a<b+c
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, 4, compare);
	for (i = 0; i < n - 2; i++)
	{
		a = arr[i];
		for (int j = i + 1; j < n - 1; j++)
		{
			b = arr[j];
			c = arr[j + 1];
			if (max < a + b + c)  //이 조건을 해줘야 시간초과가 안뜸!
			{
				if (a < b + c)
				{
					if (max < a + b + c)
						max = a + b + c;
				}
			}
			else
				break;
		}
	}
	if (max == 0)
		printf("-1");
	else
		printf("%d", max);
}