#include <stdio.h>  //어려웠다 반례를 5개 맞아버림

int main(void)
{
	int n, i, j, count[1005] = { 0 }, max = 0, student = 0;
	int c1[1005], c2[1005], c3[1005], c4[1005], c5[1005];
	scanf("%d", &n);
	for (i = 1; i <= n; i++)  //i는 학생 번호
		scanf("%d %d %d %d %d", &c1[i], &c2[i], &c3[i], &c4[i], &c5[i]);

	for (i = 1; i <= n; i++)
	{
		int check[1005] = { 0 };
		for (j = 1; j <= n; j++)
		{
			if (i != j) {
				if (c1[i] == c1[j]) {
					if (check[j] == 0) {
						count[i]++;
						check[j] = 1;
					}
				}
				if (c2[i] == c2[j]) {
					if (check[j] == 0) {
						count[i]++;
						check[j] = 1;
					}
				}
				if (c3[i] == c3[j]) {
					if (check[j] == 0) {
						count[i]++;
						check[j] = 1;
					}
				}
				if (c4[i] == c4[j]) {
					if (check[j] == 0) {
						count[i]++;
						check[j] = 1;
					}
				}
				if (c5[i] == c5[j]) {
					if (check[j] == 0) {
						count[i]++;
						check[j] = 1;
					}
				}
			}
		}
	}
	for (i = 1; i <= n; i++) {
		if (max < count[i]) {
			max = count[i];
			student = i;
		}
	}
	if (max == 0)
		printf("1");
	else
		printf("%d", student);

}