/* 백준 1316 정답 */
#include <stdio.h>
int main(){
    int a, count = 0;
    scanf("%d",&a);
    for(int i = 0; i < a; i++){
        char str[101] = {'\0'};
        char temp[101] = {'\0'};
        int size[101] = {0};
        int l = 0, same = 0, sizestr;
        scanf("%s",str);
        for(int j = 0; str[j] != '\0'; j++){
            if(str[j] != str[j + 1]){
                temp[l] = str[j];
                size[l] = j;
                l++;
            }
            sizestr = j + 1;
        }
        for(int j = 0; str[j] != '\0'; j++){
            for(int k = 0; str[k] != '\0'; k++){
                if(temp[j] == str[k]){
                    same++;
                }
            }
        }
        if(same == sizestr) count++;
    }
    printf("%d",count);
}
