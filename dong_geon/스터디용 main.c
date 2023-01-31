#include <stdio.h>
#include <string.h>

int main(void)
{
	char find[11], ring[100][11];
	int i, n, temp, len, cnt = 0;
	scanf("%s", find);
	scanf("%d", &n);
	len = strlen(find);
	for (i = 0; i < n; i++) {

		scanf("%s", ring[i]);

		for (int j = 0; j < 10; j++)
		{
			int k = 0, z = 0;
			temp = 0;
			if (find[k] == ring[i][j])  //첫 문자가 같다면
			{
				z = j;
				while (find[k] == ring[i][z])  //문자가 다르면 탈출
				{
					z++;
					k++;
					temp++;
					if (z == 10)  //ring가 10이 넘어가면 0부터
						z = 0;
				}

				if (temp == len)
				{
					cnt++;
					break;
				}
			}
		}
	}

	printf("%d", cnt);

	return 0;
}