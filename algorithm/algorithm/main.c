/* baekjoon 2355 정답(시그마 공식) */

#include <stdio.h>

int main() {
    
    long long a, b, sum = 0;
    
    scanf("%lld %lld",&a,&b);
    
    if(a<b)
        sum = (b - a + 1) * (b + a) / 2;
    
    else
        sum = (a - b + 1) * (b + a) / 2;
    
    printf("%lld", sum);
}
