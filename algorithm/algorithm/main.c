/* 백준 1010 정답 */
#include <stdio.h>
int main(){
    int T,n,k;
    scanf("%d",&T);
    for(int i = 0; i < T; i++){
        double nP = 1, kP = 1;
        scanf("%d %d",&k,&n);
        for(int i = n; i > n - k; i--){
            nP *= i;
        }
        for(int i = k; i > 0; i--){
            kP *= i;
        }
        printf("%.0lf\n", (nP/kP));
    }
}
