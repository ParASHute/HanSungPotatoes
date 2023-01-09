/* 백준 1703 정답 */
#include <stdio.h>
int main(){
    int level,sf,sum = 1;
    int a;
    while(1){
        scanf("%d",&a);
        for(int i = 0; i < a; i++){
            scanf("%d %d",&level,&sf);
            sum = sum * level - sf;
        }
        if(a == 0){
            break;
        }
        printf("%d\n",sum);
        sum = 1;
    }
}
