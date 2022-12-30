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


//이문제 말 구하는건 안어렵고 입력 받는게 살짝 까다로웠던 것 같았는데 효율적인 방법이네요 
//저는 이렇게했어요

/*
for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			scanf(" %c", &arr[i][j]); 
	}
*/

//이런식으로 8x8 칸에 넣어줘도 제대로 들어가더라구요. 특징은 %c 앞에 공백이 들어가는건데
//이거에 대해서 같이 함 공부해봐도 유용할듯 합니다. 저도 아직 헷갈리구요,