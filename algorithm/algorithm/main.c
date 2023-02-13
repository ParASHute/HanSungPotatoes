#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <time.h>
//typedef struct{
//    char name[21];
//    char pw[21];
//}P;
int compare(const void* fst, const void* snd){
    return strcmp((char*)fst, (char*)snd);
}
int main(){
    char str[10001];
    char suf[1001][1001];
    gets(str);
    int count = strlen(str);
    for (int i = 0; i < count; i++) {
            strcpy(suf[i], str);
            for (int j = 0; j < strlen(str); j++) str[j] = str[j + 1];
        }
    qsort(suf, count, sizeof(suf[0]), compare);
    for (int i = 0; i < count; i++) printf("%s\n", suf[i]);
}
//    clock_t start, finish;
//    double duration;
//    start = clock();
//    함수 위치
//    finish = clock();
//    duration = (double)(finish - start) / CLOCKS_PER_SEC;
//    printf("%fsec\n",duration);
