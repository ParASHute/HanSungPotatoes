/* 백준 1085 정답 */
#include <stdio.h>
int main(){
    int x,y,w,h;
    int line;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    line = (w - x) > (h - y) ? ((h - y) < x ? ((h - y) < y ? (h - y) : y):(x < y ? x : y)) : ((w - x) < x ? ((w - x) < y ? (w - x) : y) : (x < y ? x : y));
    printf("%d",line);
}
