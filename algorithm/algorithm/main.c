/* 백준 2738 정답 */
#include <stdio.h>
int main(){
    int n, m;
    long a1[100][100];
    long b1[100][100];
    long ans[100][100];
    
    scanf("%d %d",&n,&m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%ld", &a1[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%ld", &b1[i][j]);
        }
    }
   
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%ld ", b1[i][j] + a1[i][j]);
        }
        printf("\n");
    }
}
