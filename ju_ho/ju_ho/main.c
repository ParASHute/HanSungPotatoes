#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char str[1000000];
char a[333337];

int main() {
	int j = 0;
	int sum = 0, t = 1;
	scanf("%s", str);
	int k = strlen(str) - 1;
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[k] == '1') {
				sum += 1 * t;
			}
			if (str[k] == '0')
				sum += 0;
			t *= 2;
			k--;
			if (t == 8) {
				a[j] = 48 + sum;
				t = 1;
				sum = 0;
				j++;
			}
			if (k == -1)
			{
				a[j] = sum + 48;
			}
		}
		int size = (strlen(str)-1)/3;
		while (1) {
			printf("%c", a[size]);
			size--;
			if (size < 0)
			{
				break;
			}
		}
	return 0;
}