#include <stdio.h>

int main(void)
{
	char chess[51][51];
	int x, y, i, j, min = 65;
	scanf("%d %d", &x, &y);
	for (i = 0; i < x; i++) {
		scanf("%s", chess[i]);
	}

	for (i = 0; i < x-7; i++) {
		for (j = 0; j < y-7; j++) {
			int white = 0;
			int black = 0;
			for (int z = i; z < i + 8; z++) {
				for (int k = j; k < j + 8; k++) {
					if ((z + k) % 2 == 0) {
						if (chess[z][k] == 'B')
							white++;
						else
							black++;
					}
					else {
						if (chess[z][k] == 'B')
							black++;
						else
							white++;
					}
				}
			}
			min = black > min ? min : black;
			min = white > min ? min : white;
		}
	}
	printf("%d", min);
}