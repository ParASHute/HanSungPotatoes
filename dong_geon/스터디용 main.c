#include <stdio.h> 
#include <string.h>

//이 문제좀 풀어주세요....

//--1/5 이동건 메모--
//1252 이진수 덧셈문제 (브론즈2인데 파이썬,자바 기준인듯, c언어로는 못해도 실버 3정도로 복잡함)
//예제까지는 구현이 되지만 1111 1111 같이 1이 넘어가버리면 0으로 출력 후 다음인덱스에 1추가 하는 코드를 못하겠음
//이 코드는 arr1이 더 길다는 가정 하에 짠 코드라 반대의 경우도 만들어주어야함.
//i=k-1 혹은 len-1 처럼 뒤에서부터 시작되는 반복문이 많은데 그렇게 해야만 길이가 다른 두 배열을 더해줄 수 있다.
//다음에 실력을 더 키우고 풀자,, 지금처럼 for문과 if문으로는 쉽지않고 코드만 복잡해진다.

int main(void)
{
	int len, i, v, k = 0;   //v는 짧은 이진수배열 길이로 설정, k는 배열 sum의 인덱스
	char arr1[81] = { 0 }, arr2[81] = { 0 }, sum[82] = { 0 };
	scanf("%s %s", arr1, arr2);
	len = strlen(arr1) >= strlen(arr2) ? strlen(arr1) : strlen(arr2); //더 긴 값이 len

	if (len == strlen(arr1)) {
		v = strlen(arr2) - 1;
		for (i = len - 1; i >= 0; i--) {
			if (v == -1)
				break;
			sum[k] = (arr1[i] - '0') + (arr2[v] - '0');
			k++;
			v--;
		}

		for (i = strlen(arr2); i < len; i++) {
			sum[k] = arr1[i] - '0';
			k++;
		}
	}
	
	printf("\n1"); //맨 앞 이진수

	for (i = k - 1; i >= 0; i--)
	{
		if (sum[i] >= 2) {
			printf("%d", sum[i] % 2);  //2이상이면 2로나눈 나머지 출력하고 다음인덱스에 1추가
			if (i != 0) {  // 맨 앞은 이미 있어서 필요없고
				sum[i - 1] += 1;
			}
		}
		else if(i!=k-1)
			printf("%d", sum[i]%2);
	}
}
