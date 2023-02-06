#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second)
{
	if (*(int*)first < *(int*)second)
		return 1;
	else if (*(int*)first > *(int*)second)
		return -1;
	else
		return 0;
}

int main(void)
{
	int b, c, d, i;
	int min = 1000, sum = 0, sale = 0;
	int B[1001] = { 0 }, C[1001] = { 0 }, D[1001] = { 0 };
	scanf("%d %d %d", &b, &c, &d); 
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	if (min > d)
		min = d;

	for (i = 0; i < b; i++) {
		scanf("%d", &B[i]);
		sum += B[i];
	}
	for (i = 0; i < c; i++) {
		scanf("%d", &C[i]);
		sum += C[i];
	}
	for (i = 0; i < d; i++) {
		scanf("%d", &D[i]);
		sum += D[i];
	}
	qsort(B, b, 4, compare);
	qsort(C, c, 4, compare);
	qsort(D, d, 4, compare);

	for (i = 0; i < min; i++) {
		sale += (B[i] + C[i] + D[i])*0.9;
	}
	for (i = min; i <= 1000; i++) {
		if (B[i] != 0)
			sale += B[i];
		if (C[i] != 0)
			sale += C[i];
		if (D[i] != 0)
			sale += D[i];
		if (B[i] == 0 && C[i] == 0 && D[i] == 0)
			break;
	}
	printf("%d\n%d", sum, sale);
}