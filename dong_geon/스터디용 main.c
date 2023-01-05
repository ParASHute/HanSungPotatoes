#include <stdio.h> 
#include <string.h>

int main(void)
{
	int t, len;
	double x;
	char y[8];
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lf %[^\n]", &x,y);
		len = strlen(y);
		for (int i = 0; i < len; i++)
		{
			if (y[i] == '@')
				x *= 3;
			else if (y[i] == '%')
				x += 5;
			else if (y[i] == '#')
				x -= 7;
		}
		printf("%.2lf\n", x);
	}
}

