#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	int bran = 0;
	int cut = 0;
	int val = 1;
	while (1) {
		scanf("%d", &a);
		for (int i = 0; i < a; i++)
		{
			scanf("%d %d", &bran,&cut);
			val = val * bran - cut;
		}
		if (a == 0)
		{
			break;
		}
		printf("%d\n", val);
		val = 1;
	}
	return 0;
}