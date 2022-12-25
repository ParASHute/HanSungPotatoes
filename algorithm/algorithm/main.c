/* baekjoon 2355 시간초과 */

#include <stdio.h>

int main() {
    
    int a, b, sum = 0;
    
    scanf("%d %d",&a,&b);
    
    if(a<b){
        for(int i = a; i <= b; i++){
            sum += i;
        }
    }
    
    else
        for(int i = b; i <= a; i ++){
            sum += i;
        }
    
    printf("%d", sum);
}
