#include <stdio.h> 

int main(void)
{
	int s[101][101] = { 0 };
	int a, b, c, d, t, site = 0;
	t = 4;
	while (t--) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for (int i = a; i < c; i++) {
			for (int j = b; j < d; j++) {
				s[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (s[i][j] == 1)
				site++;
		}
	}
	printf("%d", site);
}

