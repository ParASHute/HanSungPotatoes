/* 백준 3052 */
#include <stdio.h>
int main(){
    int n[10] = {'\0'};
    int a, k, l = 0, i = 0;
    while(i < 10){
        int count = 0;
        scanf("%d",&a);
        k = a % 42;
        for(int j = 0; j < l; j++){
            if(n[j] != k){
                count++;
            }
        }
        if(count == i){
            n[l] = k;
            l++;
        }
        i++;
    }
    printf("%d\n",l);
}
