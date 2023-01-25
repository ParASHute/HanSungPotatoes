#include <stdio.h>  

int main(void)
{
	int e = 1, s = 1, m = 1, E, S, M, i, year = 1;
	scanf("%d %d %d", &E, &S, &M);
	while (1) {
		if (e == 16)
			e = 1;
		if (s == 29)
			s = 1;
		if (m == 20)
			m = 1;

		if (e == E && s == S && m == M)
			break;

		e++;
		s++;
		m++;
		year++;
	}
	printf("%d", year);
}