#include <stdio.h>
int main(){
    int arr[100000] = {0};
    int n,a;
    int k = 0, count = 0, sum = 0;
    scanf("%d",&n);
    while(1){
        scanf("%d",&a);
        count++;
        if(a == 0){
            k--;
            arr[k] = 0;
        }
        else{
            arr[k] = a;
            k++;
        }
        if(count == n) break;
    }
    for(int i = 0; i < n; i++) sum += arr[i];
    printf("%d",sum);
}
