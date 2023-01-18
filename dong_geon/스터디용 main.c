#include <stdio.h>
#include <string.h>

char word[101][10001];
int wlen[101];
char temp[10001];

int pelin(char* arr, int len)
{
	int i;
	char b[10001];
	for (i = 0; i < len; i++)
	{
		b[i] = arr[len - 1 - i];
	}
	b[len] = '\0';

	if (strcmp(arr, b) == 0) {  //팰린드롬이면 1 return
		printf("%s\n", b);
		return 0;
	}
	return 1;
}


int main(void)
{
	int t, k, i, j, end;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &k);

		end = 0;
		for (i = 0; i < k; i++) {
			scanf("%s", word[i]);
			wlen[i] = strlen(word[i]);
		}

		for (i = 0; i < k; i++)
		{
			for (j = 0; j < k; j++) {
				if (i != j) {
					strcpy(temp, word[i]);
					strcat(temp, word[j]);
					if (pelin(temp, wlen[i] + wlen[j]) == 0) {
						end = 1;  //팰린드롬이 나오면 탈출
						break;
					}
				}
			}
			if (end == 1)  //팰린드롬이 나오면 탈출
				break;
		}
		if (end == 0)  //팰린드롬이 나오지 않았다면
			printf("0\n");
	}

}