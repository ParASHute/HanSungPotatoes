/* 백준 2920 정답 */
#include <stdio.h>
int main(){
    int C_major[9] = {0};
    int i;
    for(i = 0; i < 8; i++){
        scanf("%d",&C_major[i]);
        if(i > 0){
            if(C_major[i-1] + 1 != C_major[i] && C_major[i-1] - 1 != C_major[i]){
                printf("mixed\n");
                break;
            }
        }
    }
    
    if(i == 8){
        if(C_major[6]+1 == C_major[7]){
            printf("ascending\n");
        }
        if(C_major[6]-1 == C_major[7]){
            printf("descending\n");
        }
    }
}
