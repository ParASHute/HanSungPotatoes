/* 김민성 백준 1668 트로피 전열 정답 */
#include <stdio.h>
int arr[50];
int ll(int l, int num){
    int p,q,temp = 0;
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
    return l;
}

int lr(int r, int num){
    int temp = 0, k = num;
    int p,q;
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
    return r;
}
int main(){
    
    int l = 1,r = 1;
    int num,h;
    
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++){
        scanf("%d", &h);
        arr[i] = h;
    }
    
    printf("%d\n%d",ll(l, num),lr(r,num));
}
