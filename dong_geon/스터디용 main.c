#include <stdio.h>
#include <string.h>

int main(void)
{
	char find[11], ring[22];
	int i, n, len, cnt = 0;
	scanf("%s", find);
	scanf("%d", &n);
	len = strlen(find);
	for (i = 0; i < n; i++) {
		scanf("%s", ring);
		strncat(ring, ring, n);
		if (strstr(ring, find) != NULL)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}