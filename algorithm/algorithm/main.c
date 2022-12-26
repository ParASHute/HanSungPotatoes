/* baekjoon 1006 정답 */

#include <stdio.h>
#define MAX 1000000

int expon(int a, int b){
    
    int x = 1;
    for(int i = 0; i < b; i++){
        x *= a;
        x = x % 10;
    }
    
    return x;
}

int main() {
    
    int a, b, count;
    int ans;
    int arr[MAX] = {0};
    
    scanf("%d", &count);
    
    for(int i = 0; i < count; i++){
        scanf("%d %d",&a, &b);
        arr[i] = expon(a, b);
    }
    
    for(int i = 0; i < count; i++){
        
        ans = arr[i];
        if(ans == 0)
            printf("10\n");
        else
            printf("%d\n", ans);
    }
}
