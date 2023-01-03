#include <stdio.h> 
//count sort 계수정렬
int main(void)
{
	int n, x, i, count[10001] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		count[x] = count[x] + 1;
	}

	for (i = 1; i < n; i++) {
		for (int j = 1; j <= count[i]; j++) {
			printf("%d\n",i);
		}
	}
	return 0;
}

