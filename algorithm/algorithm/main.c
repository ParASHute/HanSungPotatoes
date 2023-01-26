#include <stdio.h>
#include <string.h>
#define max 1000000
void ascending(int arr[], int n) {
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i] < arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
void game(int str[], int n, int arr[], int m){
    while(1){
        if(str[n] > arr[m]){
            str[n] = str[n] - arr[m];
            m--;
        }
        if(str[n] < arr[m]){
            arr[m] = arr[m] - str[n];
            n--;
           }
        if(str[n] == arr[m]){
            arr[m] = 0;
            m--;
           }
        if(n == 0 || m == 0){
            if(n == 0){
                printf("B\n");
                break;
            }
            else if(m == 0){
                printf("S\n");
                break;
            }
            else{
                printf("C\n");
                break;
            }
        }
    }
}
int main(){
    int t;
    scanf("%d", &t);
    for(int k = 0; k < t; k++){
        int n, m;
        int sj[max] = {0};
        int sb[max] = {0};
        scanf("%d %d",&n,&m);
        for(int i = 0; i < n; i++){
            scanf("%d",&sj[i]);
            
        }
        ascending(sj,m);
        for(int i = 0; i < m; i++){
            scanf("%d",&sb[i]);
        }
        ascending(sb,m);
        game(sj, n, sb, m);
    }
}
