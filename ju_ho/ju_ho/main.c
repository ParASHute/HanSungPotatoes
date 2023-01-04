#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count=0;
	char str[9] = { 0 };
	for (int i = 0; i < 8; i++)
	{
		gets(str);
		if (i%2==0)
		{
			for (int j = 0; j < 8; j++) {
				if (str[j] == 'F')
				{
					if (j % 2 == 0)
					{
						count++;
					}
				}
			}
		}
		else
			for (int k = 0; k < 8; k++)
			{
				if (str[k] == 'F') {
					if (k%2 ==1)
					{
						count++;
					}
				}
			}
	}
	printf("%d", count);
	return 0;
}