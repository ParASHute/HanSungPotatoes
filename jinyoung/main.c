#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int major[10];
	int a = 0, b = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &major[i]);
		if (i + 1 == major[i]) a++;
		else if (8 - i == major[i])b++;
	}
	if (a == 8)printf("ascending");
	else if (b == 8)printf("descending");
	else printf("mixed");
}