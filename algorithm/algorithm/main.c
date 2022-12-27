#include <stdio.h>

int main(){
    int change1, change2;
    int count, ans;
    
    scanf("%d",&count);
    
    ans = 1;
    
    for(int i = 0; i < count; i++){
        scanf("%d %d", &change1,&change2);
        if(change1 == ans || change2 == ans){
            if(change1 == ans){
                ans = change2;
            }
            else if(change2 == ans){
                ans = change1;
            }
        }
    }

    printf("%d",ans);
}

//코드 직관성이 훌륭하네요. 도움 받고 갑니다.
