/* 백준 1094 정답 */
#include <stdio.h>
int main(){
    int count = 0;
    int WB;
    scanf("%d",&WB);
    while (WB > 0) {
        WB = (WB-1)&WB;
        count++;
    }
    printf("%d\n", count);
}
