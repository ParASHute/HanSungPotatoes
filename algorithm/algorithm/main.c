/* 백준 2884 정답*/
#include <stdio.h>
int main(){
    int sH,sM;
    int m;
    scanf("%d %d",&sH,&sM);
    if(sH == 0) sH = 24;
    m = ((sH * 60) + sM) - 45;
    (m/60) == 24 ? printf("0 %d", (m % 60)) : printf("%d %d", (m/60), (m % 60));
}
