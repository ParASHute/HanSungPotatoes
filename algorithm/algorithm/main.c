/* 백준 2577 정답*/
#include <stdio.h>
int main(){
    int arr[9];
    int a,t = 1, k;
    int count = 0,count1 = 0;
    for(int i = 0; i < 3; i++){
        scanf("%d",&a);
        t *= a;
    }
    for(int i = 0; i < 9; i++){
        k = t % 10;
        arr[i] = k;
        t /= 10;
        if(t != 0){
            count1++;
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < count1+1; j++){
            if(arr[j] == i){
                count++;
            }
        }
        printf("%d\n",count);
        count = 0;
    }
}
