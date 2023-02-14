#include <stdio.h>

int main()
{
	char pic[50][5][7];
	char ans[5][7];
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < 5; j++)
			scanf("%s", pic[i][j]);
	}
	int index = 0;
	int a=0, b=0, cnt, max = -1;
	while (1) {
		if (index == n)
			break;

		for (i = 0; i < 5; i++) {
			for (j = 0; j < 7; j++) {
				ans[i][j] = pic[index][i][j];
			}
		}
		
		for (int k = 0; k < n; k++) {
			cnt = 0;
			if (k == index)
				continue;
			for (i = 0; i < 5; i++) {
				for (j = 0; j < 7; j++) {
					if (ans[i][j] == pic[k][i][j])
						cnt++;
				}
			}
			if (cnt > max)
			{
				max = cnt;
				a = index + 1;
				b = k + 1;
			}
		}

		index++;
	}
	if (a < b)
		printf("%d %d", a, b);
	else
		printf("%d %d", b, a);
}