/* 백준 3052 정답*/
#include <stdio.h>
int main(){
    int n[10] = {0};
    int a, k, l = 0;
    int count = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d",&a);
        k = a % 42;
        for(int j = 0; j < l; j++){
            if(n[j] != k){
                count++;
            }
        }
        if(count == l){
            n[l] = k;
            l++;
        }
        count = 0;
    }
    printf("%d\n",l);
}
