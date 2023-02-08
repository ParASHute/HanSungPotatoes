#include <stdio.h> 

int main(void)
{
	int T, n;
	scanf("%d", &T);
	while (T--) {
		int vote[10] = { 0 };
		int max = 0, maxi, sum = 0, check = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &vote[i]);
			sum += vote[i];
			if (max < vote[i]) {
				max = vote[i];
				maxi = i;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (max == vote[i])
				check++;
		}
		if (check != 1) {
			printf("no winner\n");
			continue;
		}
		if (max > sum - max) {
			printf("majority winner %d\n", maxi + 1); 
		}
		else {
			printf("minority winner %d\n", maxi + 1);
		}
	}
}
