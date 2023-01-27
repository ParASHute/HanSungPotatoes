#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, a = 0, b, arr1, arr2, tmp;
	scanf("%d", &x);
	for (int i = 0;; i++) {
		a += i;
		if (a >= x) {
			b = i;
			a -= i;
			break;
		}
	}
	arr1 = x - a;
	arr2 = b - arr1 + 1;
	if (b % 2 == 1) {
		tmp = arr1;
		arr1 = arr2;
		arr2 = tmp;
	}
	printf("%d/%d", arr1, arr2);
}