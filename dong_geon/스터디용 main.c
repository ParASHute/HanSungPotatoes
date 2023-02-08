#include <stdio.h> 

int main(void)
{
	int k, i, arr[100001] = { 0 }, zero[100001] = { 0 };
	int sum = 0;
	scanf("%d", &k);
	for (i = 0; i < k; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
			zero[i] = 1;
	}

	for (i = 1; i <= k; i++) {
		if (zero[i] == 1)
		{
			int index = i;
			while (1)
			{
				if (arr[index - 1] != 0) {
					arr[index - 1] = 0;
					break;
				}
				else
					index--;
			}
		}
	}

	for (i = 0; i < k; i++)
		sum += arr[i];

	printf("%d", sum);
}
