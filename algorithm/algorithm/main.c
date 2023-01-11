/* 백준 2231 정답 */
#include <stdio.h>
int main(){
    int n,a,b = 1,c;
    int min = 1000000, sum = 0, sum2 = 0;
    scanf("%d",&n);
    a = n;
    for(int i = 0; i < 7; i++){
        a /= 10;
        if(a != 0){
            b++;
        }
    }
    for(int i = 0; i < n; i++){
        sum = n - i;
        c = sum;
        for(int j = 0; j < b; j++){
            sum2 += sum % 10;
            sum /= 10;
        }
        if((n - c) == sum2){
            if(min > c){
                min = c;
            }
        }
        sum2 = 0;
    }
    if(min == 1000000){
        printf("0");
    }
    else{
        printf("%d",min);
    }
}
