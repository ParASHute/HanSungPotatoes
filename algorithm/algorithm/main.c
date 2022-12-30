/* 김민성 백준 2748 dp */
#include <stdio.h>

long long dp[90];
long long Fibonacci(long long n){
    
    if (n == 1 || n == 2)
        return 1;
    
    if(dp[n] != 0)
      return dp[n];
    
    else
        dp[n] = Fibonacci(n-1) + Fibonacci(n-2);
    
    return dp[n];
}

int main(){
    
    long long count;
    
    scanf("%lld",&count);
    printf("%lld", Fibonacci(count));
}
