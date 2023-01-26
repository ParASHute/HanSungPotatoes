/* 백준 1094 정답 */
#include <stdio.h>
int main(){
    int WB,count = 0;
    scanf("%d",&WB);
    for(int i = 0; WB > 0; i++){
        if(WB % 2 == 1) count++;
        WB = WB / 2;
    }
    printf("%d\n", count);
}
