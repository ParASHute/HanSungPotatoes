#include <stdio.h> 

int main(void)
{
	int k, i, arr[100001] = { 0 }, zerocnt = 0;
	long long sum = 0;
	scanf("%d", &k);
	for (i = 0; i < k; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (arr[j] != 0) {
					arr[j] = 0;
					break;
				}
			}
		}
	}
	
	for (i = 0; i < k; i++)
		sum += arr[i];

	printf("%lld", sum);
}

