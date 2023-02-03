#include <stdio.h>
#include <stdlib.h>
int compare(const void* fst, const void* snd){
    if(*(int*) fst < *(int*) snd) return 1;
    if(*(int*) fst > *(int*) snd) return -1;
    else return 0;
}
int main() {
    int arr[10] = {0};
    int count = 0;
    int N, K;
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, N, sizeof(int), compare);
    while(1){
        for(int i = 0; i < N; i++){
            if(K - arr[i]  >= 0){
                K = K - arr[i];
                count++;
                break;
            }
        }
        if(K == 0) break;
    }
    printf("%d", count);
}
