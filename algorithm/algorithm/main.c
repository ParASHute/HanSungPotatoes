/* 김민성 백준 1100 하얀 칸 정답 */
#include <stdio.h>

void chess(int chess[9]){
    char Piece;
    for(int i = 0; i < 9; i++){
            scanf("%c",&Piece);
            chess[i] = Piece;
    }
}

int main(){
    int ches[9];
    int count = 0;
    
    for(int i = 0; i < 8; i++){
        chess(ches);
        for(int j = 0; j < 8; j++){
            if(i % 2 == 0){
                if(j % 2 == 0 && ches[j] == 'F')
                    count++;
            }
            
            else{
                if(j % 2 == 1 && ches[j] == 'F')
                    count++;
            }
        }
    }
    
    printf("%d\n",count);
}
