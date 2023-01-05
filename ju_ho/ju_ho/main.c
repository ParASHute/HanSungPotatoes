#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char N[11];
	int a = 0;
	int i = 0;
	int j = 0;
	int sum1 = 1, sum2 = 1;
	scanf("%s", N);
	for (int k = 0; k < strlen(N) - 1; k++) {
		int b = strlen(N) - 1;
		for (i = strlen(N)-1; i > k; i--)
		{
			if (N[b] == '0') {
				sum1 *= 0;
			}
			if (N[b] == '1') {
				sum1 *= 1;
			}
			if (N[b] == '2') {
				sum1 *= 2;
			}
			if (N[b] == '3') {
				sum1 *= 3;
			}
			if (N[b] == '4') {
				sum1 *= 4;
			}
			if (N[b] == '5') {
				sum1 *= 5;
			}
			if (N[b] == '6') {
				sum1 *= 6;
			}
			if (N[b] == '7') {
				sum1 *= 7;
			}
			if (N[b] == '8') {
				sum1 *= 8;
			}
			if (N[b] == '9') {
				sum1 *= 9;
			}
			b--;
		}
		for (j = 0; j <= k; j++) {
			if (N[j] == '0')
				sum2 *= 0;
			if (N[j] == '1')
				sum2 *= 1;
			if (N[j] == '2')
				sum2 *= 2;
			if (N[j] == '3')
				sum2 *= 3;
			if (N[j] == '4')
				sum2 *= 4;
			if (N[j] == '5')
				sum2 *= 5;
			if (N[j] == '6')
				sum2 *= 6;
			if (N[j] == '7')
				sum2 *= 7;
			if (N[j] == '8')
				sum2 *= 8;
			if (N[j] == '9')
				sum2 *= 9;
		}
		if (sum1 == sum2)
		{
			printf("YES");
			return 0;
		}
		sum1 = 1;
		sum2 = 1;
	}
	printf("NO");
	return 0;
}