/* backjoon 2721 정답 */

#include <stdio.h>
#define MAX 3000

int Tn(int a){

    int sum = 0;

    for(int i = 1; i <= a; i++){
        sum += i;
    }

    return sum;
}

int Wn(int n){

    int wn = 0;

    for(int i = 1; i <= n; i ++){
        wn += i * Tn(i+1);
    }
    
    return wn;
}

int main() {
    
    int count, k;
    int arr[MAX] = {0};
    
    scanf("%d", &count);

    for(int i = 0; i < count; i++){
        scanf("%d", &k);
        arr[i] = k;
    }
    
    for(int i = 0; i < count; i++){
        k = arr[i];
        printf("%d\n", Wn(k));
    }
}
