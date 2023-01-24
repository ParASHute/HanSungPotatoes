#include <stdio.h>
#include <string.h>

void print(char a[6], int len)
{
	int i, j, k, o, p;
	if (len == 1)
		printf("%s\n", a);
	else if (len == 2)
		printf("%c%c\n%c%c\n", a[0], a[1], a[1], a[0]);
	else if (len == 3)
	{
		for (i = 0; i < len; i++)
		{
			for (j = 0; j < len; j++)
			{
				for (k = 0; k < len; k++) {
					if (i != j && j != k && i!=k)
						printf("%c%c%c\n", a[i],a[j],a[k]);
				}
			}
		}
	}
	else if (len == 4)
	{
		for (i = 0; i < len; i++)
		{
			for (j = 0; j < len; j++)
			{
				for (k = 0; k < len; k++)
				{
					for (o = 0; o < len; o++) {
						if (i == j || i == k || i == o || j == k || j == o || k == o)
							continue;
						else
							printf("%c%c%c%c\n", a[i], a[j], a[k], a[o]);
					}
				}
			}
		}
	}
	else if(len==5)
	{
		for (i = 0; i < len; i++)
		{
			for (j = 0; j < len; j++)
			{
				for (k = 0; k < len; k++)
				{
					for (o = 0; o < len; o++)
					{
						for (p = 0; p < len; p++)
							if (i == j || i == k || i == o || i == p || j == k || j == o || j == p || k == o || k == p || o == p)
								continue;
							else
								printf("%c%c%c%c%c\n", a[i], a[j], a[k], a[o], a[p]);
					}
				}
			}
		}
	}
}

int main() 
{
	int n, i, len[201] = { 0 };
	char a[201][6];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", a[i]);
		len[i] = strlen(a[i]);
	}

	for (i = 0; i < n; i++)
	{
		printf("Case # %d:\n", i + 1);
		print(a[i], len[i]);
	}
}
