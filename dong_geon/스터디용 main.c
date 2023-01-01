#include <stdio.h>

int main(void) 
{
	int t, n, i, sum, sum2, count,check, num[500];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		sum = 0;
		count = 0;
		check = 0;
		for (i = 2; i < n; i++)
		{
			if (n % i == 0) {
				sum += i;
				num[count] = i;
				count++;
			}
		}
		if (sum > n)
		{
			for (i = 0; i < count; i++)
			{
				sum2 = 0;
				for (int j = 2; j < num[i]; j++)
				{
					if (num[i] % j == 0)
						sum2 += j;
				}
				if (sum2 > num[i]) {
					printf("BOJ 2022\n");
					break;
				}
				check++;
			}
			if (check==count)
				printf("Good Bye\n");
		}

		else
			printf("BOJ 2022\n");
	}
	return 0;
}