/* 백준 2908 정답*/
#include <stdio.h>
int main(){
    int a, b;
    int a_ans, b_ans;
    int a1,a2,a3,b1,b2,b3;
    scanf("%d %d",&a,&b);
    a1 = a % 10, b1 = b % 10;
    a2 = (a / 10) % 10, b2 = (b / 10) % 10;
    a3 = a / 100, b3 = b / 100;
    a_ans = (a1 * 100) + (a2 * 10) + a3;
    b_ans = (b1 * 100) + (b2 * 10) + b3;
    a_ans > b_ans ? printf("%d",a_ans) : printf("%d",b_ans);
}
