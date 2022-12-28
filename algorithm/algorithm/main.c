/* 백준 5023 탄산 음료 */
#include <stdio.h>

int main(){
    int e,f,c;
    int p,q,sum, k;
    int ans = 0;
    
    scanf("%d %d %d",&e,&f,&c);
    sum = e+f;
    while(sum > c){
        
        sum = e + f;
        p = sum / c;
        q = sum % c;
        k = p + q;
        ans += p;
        
        f = q;
        e = p;
        
        if(e+q < c){
            break;
        }
    }
    
    printf("%d", ans);
}
