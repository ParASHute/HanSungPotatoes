/* 김민성 백준 1373 정답 */
#include <stdio.h>
int main(){
    char num[1000000];
    char eight[333337];
    int count = 0;
    int sum = 0, to = 1, a = 0, b = 0, j = 0;
    scanf("%s",num);
    if(num[0] == '0' && num[1] == '\0'){
        printf("0");
        return 0;
    }
    if(num[0] == '0' && num[1] == '0' && num[2] == '\0'){
        printf("0");
        return 0;
    }
    for(int i = 1; num[i]; i++){
            count++;
        }
    a = count+1;
    b = (count / 3);
    for(int i = 0; i < a; i++){
        if(num[count] == '0'){
            sum += 0;
        }
        
        else if(num[count] == '1'){
            sum += 1 * to;
        }
        
        to *= 2;
        count--;
        if(to == 8){
            to = 1;
            eight[j] = 48 + sum;
            sum = 0;
            j++;
        }
        if(count == -1){
            eight[j] = 48 + sum;
        }
    }
    while(1){
        printf("%c", eight[b]);
        b--;
        if(b < 0)
            break;
    }
}
