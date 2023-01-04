#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char a[1000000];

void reverse(int size, char array[]) {
	char temp;
	for (int i = 0; i < size / 2; ++i) {
		temp = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = temp;
	}
}

int main() {
	int sum = 0, f, b;

	scanf("%s", a);
	b = strlen(a);
	reverse(b, a);

	while (strlen(a) % 3 > 0) {
		strcat(a, "0");
	}
	b = strlen(a);
	reverse(b, a);

	for (int i = 0; i < b; i++) {
		if (a[i] == '1')f = 1;
		else f = 0;

		if ((i + 1) % 3 == 0) {
			sum += f;
			printf("%d", sum);
			sum = 0;
		}
		else if ((i + 1) % 3 == 1) {
			sum = sum + f * 4;
		}
		else if ((i + 1) % 3 == 2) {
			sum = sum + f * 2;
		}
	}
}