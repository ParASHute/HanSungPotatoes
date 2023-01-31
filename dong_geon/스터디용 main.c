#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	int i, n, len;
	char arr[30];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %[^\n]s", arr);  //입력버퍼 때문에 한칸 띄어야함
		if (arr[0] >= 97 && arr[0] <= 122)
			arr[0] -= 32;
		printf("%s\n", arr);
	}
}
