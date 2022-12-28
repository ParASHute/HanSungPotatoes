/* 김민성 백준 1668 트로피 전열 */
#include <stdio.h>

int main(){
    
    int arr[50] = { 0 };
    int l = 1,r = 1;
    int num,temp = 0,h;
    int p,q,k;
    
    scanf("%d", &num);
    k = num;
    
    for(int i = 0; i < num; i++){
        scanf("%d", &h);
        arr[i] = h;
    }
    
    for(int i = 0; i < num; i++){
        p = arr[i];
        q = arr[i + 1];
        if(q > p){
            if(q > temp){
                l++;
                temp = q;
            }
        }
        else{
            if(p > temp)
                temp = p;
        }
    }
    temp = 0;
    p = 0;
    q = 0;
    for(int i = 0; i < num; i++){
        p = arr[k - 1];
        q = arr[k - 2];
            if(q > p){
                if(q > temp){
                    r++;
                    temp = q;
                }
            }
            else{
                if(p > temp)
                    temp = p;
            }
        k--;
        if(k-2 < 0)
            break;
    }
    
    printf("%d\n%d",l,r);
}
