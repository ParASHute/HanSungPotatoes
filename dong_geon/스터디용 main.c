#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[101][60];  //100명까지 이름글자최대 60인 2차원문자배열
	char index[9];  //이 값은 의미없음
	int n, i = 1, j, x;
	while (1) {
		scanf("%d", &n);  //scanf로 받고 버퍼에 n값이 남아있게됌 그러면 만약 메인함수에서 다음 scanf에서도 버퍼값(n)을 이용을 해버림.
		getchar();  //그 값을 getchar();로 사용(그냥 의미없는 값 받기)으로 버퍼값을 지운다.
		if (n == 0)  //0일때 탈출
			return 0;
		int numcheck[101] = { 0 }; //매번 int배열은 0으로 초기화
		for (j = 0; j < n; j++)
			gets(name[j]);  //공백포함 문자열 받는건 gets가 가장 깔끔함

		for (j = 0; j < 2 * n - 1; j++) {
			scanf("%d %s", &x, index); //인덱스(A or B)는 중요하지 않음 앞의 x값이 중요함
			numcheck[x - 1]++;  //x값이 결국 2번 들어온다=> 빼앗겼다가 돌려는 받았다. -1은 그냥 인덱스값 맞추기위함
		}
		for (j = 0; j < n; j++) {
			if (numcheck[j] == 1) {  //x값이 한번만 들어온 애 출력 -> 뺴앗겼을때 번호적혔지만 돌려받는 번호는 없었다.
				printf("%d %s\n", i++, name[j]);
				break;
			}
		}
	}
}