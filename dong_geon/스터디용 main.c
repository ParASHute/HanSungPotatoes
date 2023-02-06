#include <stdio.h>

int main() {
	int a[5][4], score[5]={0}, maxscore = 0, max = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
			score[i] += a[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (score[i] > maxscore)
		{
			maxscore = score[i];
			max = i;
		}
	}
	printf("%d %d", max + 1, score[max]);
}
