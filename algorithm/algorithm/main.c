#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//typedef struct{
//    int s;
//    int r;
//}list;
int main(){
    int n;
    int max = 0;
    int P[16] = {0};
    int T[16] = {0};
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        scanf("%d %d", &T[i], &P[i]);
    }
    for(int i = 1; i <= n; i++){
        int k = i;
        int count = 0;
        while(1){
            if(k > n) break;
            if(k == n && T[k] != 1 && k+T[k] > n) break;
            count += P[k];
            k += T[k];
        }
        max = count > max ? count : max;
    }
    printf("%d",max);
}

// 4번 케이스에 있어서  5 4 3 2 1 1(2) 2(2) 3(2) 4(2) 5(2)로 들어가는데
// 5 1(2) 2가 아닌 5 1(2) 3(2)이 되야 한다 -> 이경우를 잡아야 함

//    clock_t start, finish;
//    double duration;
//    start = clock();
//    함수 위치
//    finish = clock();
//    duration = (double)(finish - start) / CLOCKS_PER_SEC;
//    printf("%fsec\n",duration);
