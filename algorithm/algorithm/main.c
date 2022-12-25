/* baekjoon 2355 시간초과(함수) */

#include <stdio.h>

int aSb(int a, int b){
    int sum = 0;
    
    if(a<b){
        for(int i = a; i <= b; i++){
            sum += i;
        }
    }
    
    else
        for(int i = b; i <= a; i ++){
            sum += i;
        }
    return sum;
}

int main() {
    
    int a, b, ans;
    
    scanf("%d %d",&a,&b);
    
    ans = aSb(a, b);
    
    printf("%d", ans);
}
