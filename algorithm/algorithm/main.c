#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <time.h>
typedef struct{
    char str[10];
    int kor;
    int eng;
    int mat;
} grade;
int compare(const void* fst, const void* snd){
    grade F = *(grade*)fst;
    grade S = *(grade*)snd;
    if(F.kor < S.kor) return 1;
    else if(F.kor == S.kor){
        if(F.eng > S.eng) return 1;
        else if(F.eng ==  S.eng){
            if(F.mat < S.mat) return 1;
            else if(F.mat == S.mat) return strcmp(F.str, S.str);
            else return -1;
        }
        else return -1;
    }
    else return -1;
}
int main(){
    grade arr[100000] = {'\0'};
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%s %d %d %d", arr[i].str, &arr[i].kor, &arr[i].eng, &arr[i].mat);
    }
    qsort(arr, n, sizeof(grade), compare);
    for(int i = 0; i < n; i++) printf("%s\n",arr[i].str);
}
//    clock_t start, finish;
//    double duration;
//    start = clock();
//    함수 위치
//    finish = clock();
//    duration = (double)(finish - start) / CLOCKS_PER_SEC;
//    printf("%fsec\n",duration);
