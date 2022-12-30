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
