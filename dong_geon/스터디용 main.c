#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, p, z, i, c[101] = { 0 }, money;
	char name[101][21], max[101][21] = {0};
	scanf("%d", &n);
	for(z=0; z<n; z++)
	{
		int c[101] = { 0 };
		money = 0;
		scanf("%d", &p);

		for (i = 0; i < p; i++) {
			scanf("%d %s", &c[i], name[i]);
			if (money < c[i]) {
				money = c[i];
				strcpy(max[z],name[i]);
			}
		}

	}
	for (i = 0; i < n; i++)
		printf("%s\n", max[i]);
}