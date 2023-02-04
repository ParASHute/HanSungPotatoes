#include <stdio.h>
//생각보다 좀 까다로운 문제

int main() {
	int m[10], n, sum[10] = { 0 }, dif[10] = { 0 };

	for (int i = 0; i < 10; i++)
		scanf("%d", &m[i]);

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++) {
			sum[i] += m[j];
			if (sum[i] >= 100)
				break;
		}

		if (sum[i] < 100)
			dif[i] = 100 - sum[i] + 1;
		else
			dif[i] = sum[i] - 100;
	}
	int min_dif = 100;
	int index;
	for (int i = 0; i < 10; i++)
	{
		if (dif[i] < min_dif) {
			min_dif = dif[i];
			index = i;
		}
	}
	printf("%d", sum[index]);
}