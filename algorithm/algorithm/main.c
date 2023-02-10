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
    int n;
    int arr[100] = {0};
    int ans[200] = {0};
    scanf("%d",&n);
    for(int i = 0; i < n; i++) scanf("%d",&arr[i]);
    for(int i = 1; i < n; i++) printf("%d/%d\n",arr[0] / gcd(arr[0],arr[i]), arr[i] / gcd(arr[0],arr[i]));
    
}
//    clock_t start, finish;
//    double duration;
//    start = clock();
//    함수 위치
//    finish = clock();
//    duration = (double)(finish - start) / CLOCKS_PER_SEC;
//    printf("%fsec\n",duration);
