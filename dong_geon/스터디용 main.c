#include <stdio.h>
#include <string.h>

char str[1005];

int main(void)
{
	int len, i, check[4] = { 0 };
	fgets(str, 1005, stdin);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == 'U')
			check[0]++;
		if (str[i] == 'C') {
			if(check[0]>0)
				check[1]++;
		}
		if (str[i] == 'P') {
			if (check[1] > 0) 
				check[2]++;
		}
		if (check[2] > 0) {
			if (str[i] == 'C')
				check[3]++;
		}
	}
	if (check[0] > 0 && check[1] > 0 && check[2] > 0 && check[3] > 0)
		printf("I love UCPC");
	else
		printf("I hate UCPC");
	
}