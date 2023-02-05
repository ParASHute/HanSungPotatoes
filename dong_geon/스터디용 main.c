#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//실행시간을 측정해주는 코드 (time.h 를 꼭 추가해주어야 함)

int main() {
	int x = 0;
	clock_t start, stop;
	double duration;

	start = clock();   //여기서부터 시작
	//시간을 계산하고자 하는 코드
	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < 10000; j++)
			x++;
	}
	stop = clock();  //여기까지 시간측정

	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("%d %lf초가 걸림", x, duration);
}