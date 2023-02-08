#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct grade
{
	char str[10];
	int han;
	int eng;
	int math;
}; 

struct grade list[100000];

int static compare(const void* fir, const void* sec) {
	struct grade F = *(struct grade*)fir;
	struct grade S = *(struct grade*)sec;
	if (F.han < S.han)
		return 1;
	else if (F.han == S.han)
		if (F.eng > S.eng)
			return 1;
		else if (F.eng == S.eng)
			if (F.math < S.math)
				return 1;
			else if (F.math == S.math)
				return strcmp(F.str,S.str);
			else
				return -1;
		else
			return -1;
	else
		return -1;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", list[i].str);
		getchar();
		scanf("%d %d %d", &list[i].han,&list[i].eng,&list[i].math);
	}
	qsort(list, N, sizeof(struct grade), compare);
	for (int j = 0; j < N; j++)
	{
		printf("%s\n", list[j].str);
	}
	return 0;
}