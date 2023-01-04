#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define max 1000000

char str[max];
char a[max];

int main() {
	int j = 0;
	int sum = 0, t = 1;
	scanf("%s", &str);
	if (str[0] == '0' && str[1] == '\0')
	{
		printf("0");
	}
	if (str[0] == '0' && str[1] == '0' && str[2] == '\0')
	{
		printf("0");
	}
	int k = strlen(str) - 1;
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[k] == '1') {
				sum += 1 * t;
			}
			if (str[k] == '0')
				sum += 0;
			t *= 2;
			if (t == 8) {
				if (sum == 0)
				{
					a[j] = 48;
				}
				else
					a[j] = 48 + sum;
				t = 1;
				sum = 0;
				j++;
			}
			k--;
			if (k == -1)
			{
				a[j] = sum + 48;
			}
		}
		int size = strlen(a) - 1;
		while (1) {
			printf("%c", a[size]);
			size--;
			if (size < -1)
			{
				break;
			}
		}
	return 0;
}