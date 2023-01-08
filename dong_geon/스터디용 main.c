#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, z, count, max[3] = { 0 };
	char arr[3][9];
	for (i = 0; i < 3; i++)
		scanf("%s", arr[i]);

	for (z = 0; z < 3; z++) 
	{
		count = 1;
		for (i = 0; i < 7; i++)
		{
			if (arr[z][i] == arr[z][i + 1]) {
				count++;
				if (max[z] <= count) {
					max[z] = count;
				}
			}
					
			else if (arr[z][i] != arr[z][i + 1])
			{	
				if (max[z] <= count) {
					max[z] = count;
				}
				count = 1;
			}
		}
	}
	printf("%d\n%d\n%d", max[0], max[1], max[2]);
}