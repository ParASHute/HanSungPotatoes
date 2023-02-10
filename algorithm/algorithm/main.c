#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//typedef struct{
//    int z;
//    int y;
//}name;
int gcd(int a, int b){
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}
int main(){
    int n,a;
    int arr[100] = {0};
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        long long sum = 0;
        scanf("%d",&a);
        for(int j = 0; j < a; j++) scanf("%d",&arr[j]);
        for(int k = 0; k < a - 1; k++){
            for(int l = k + 1; l < a; l++){
                sum += gcd(arr[k], arr[l]);
            }
        }
        printf("%lld\n",sum);
    }
}
//    clock_t start, finish;
//    double duration;
//    start = clock();
//    함수 위치
//    finish = clock();
//    duration = (double)(finish - start) / CLOCKS_PER_SEC;
//    printf("%fsec\n",duration);
