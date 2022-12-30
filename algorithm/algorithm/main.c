/* 김민성 백준 2748 재귀(시간초과) */
#include <stdio.h>

long long Fibonacci(long long n){
    
    if ( n <= 1 ) {
        return n;
      }
      return Fibonacci(n-1) + Fibonacci(n-2);
    }

int main(){
    
    long long count;
    
    scanf("%lld",&count);
    printf("%lld", Fibonacci(count));
}


//이문제 말 구하는건 안어렵고 입력 받는게 살짝 까다로웠던 것 같았는데 효율적인 방법이네요 
//저는 이렇게했어요

/*
for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			scanf(" %c", &arr[i][j]); 
	}
*/

//이런식으로 8x8 칸에 넣어줘도 제대로 들어가더라구요. 특징은 %c 앞에 공백이 들어가는건데
//이거에 대해서 같이 함 공부해봐도 유용할듯 합니다. 저도 아직 헷갈리구요,