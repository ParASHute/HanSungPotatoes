#include <stdio.h>

int main() {
	int n, i[101], cnt = 0;
	scanf("%d", &n);
	for (int j = 0; j < n; j++)	{
		scanf("%d", &i[j]);
		if (i[j] == 1)
			cnt++;
	}
	if (n / 2 < cnt)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
}