#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define zero 48
int main() {
	char N[100] = { 0 };
	int count = 0;
	int sum = 0;
	scanf("%s", N);
	if (N[0] == 48)
	{
		printf("1");
		return 0;
	}
	if (N[0]>48 && N[0] < 58 && N[1] == '\0')
	{
		for (int i = 0; i < 10; i++)
		{
			if (N[0] == i + zero) {
				N[1] = i + zero;
				N[0] = zero;
				break;
			}
		}
	}
	N[2] = N[0];
	N[3] = N[1];
	while (1)
	{
		sum = (N[0] - zero + N[1] - zero) % 10;
		N[0] = N[1];
		N[1] = sum + 48;
		count++;
		if (N[2] == N[0] && N[3] == N[1])
		{
			printf("%d", count);
			break;
		}
	return 0;
}