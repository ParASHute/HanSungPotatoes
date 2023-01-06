#include <stdio.h>

int count[10001] = { 0 };
int main(void)
{
	int n, x, i, max = 0, min = 10001;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		count[x]++;
	}
	
	for (i = 1; i < 10001; i++) {
		for(int j=0; j<count[i]; j++)
			printf("%d\n", i);
	}
}

