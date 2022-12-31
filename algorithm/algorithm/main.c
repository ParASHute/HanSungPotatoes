/* 김민성 백준 1934 정답 */
#include <stdio.h>
#define MAX 1000

int func(int A, int B){
    if (B == 0)
        return A;
    return func(B, A % B);
}

int main(){
    
    int count,a,b;
    int L[MAX];
    
    scanf("%d",&count);
    
    for(int i = 0; i < count; i++){
        scanf("%d %d",&a,&b);
        L[i] =  func(a, b) * (a/func(a, b)) * (b/func(a, b));
    }
    
    for(int i = 0; i <count; i++){
        printf("%d\n", L[i]);
    }
}
