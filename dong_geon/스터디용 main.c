#include <stdio.h>

int arr[1000005] = { 0 }; //소수점 아래 넣어둘 배열

int main(void)
{
	int a, b, n, ten = 10;
	int i, same = 0;
	scanf("%d %d %d", &a, &b, &n);
	for (i = 1; i <= n; i++)
	{
		arr[i] = a * ten / b % 10;  //i번째 소수점 정수로 구하는 식

		for (int j = 1; j < i; j++)
		{
			if (arr[i] == arr[j]) {  //소수점 아래 같은 숫자가 나왔을 때
				same = i;
			}
		}
		if (i == same)  //소수점 아래 같은 숫자가 나왔을 때 탈출
			break;

		ten *= 10;
	}

	if (same != 0) {  
		if (arr[same - 1] != arr[same])  //ex) 25/7 =3.571428 ,571428 ,571 ..
			printf("%d", arr[n % same + 1]);
		else  //ex) 10/12 = 0.8333333 or 3/4=0.750000000
			printf("%d", arr[same]);
	}

	else {  //n이 같은 숫자 나오기 전보다 작을 때
		printf("%d", arr[n]);
	}
}