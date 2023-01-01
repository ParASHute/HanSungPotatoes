#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int min1, min2, sum = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    if (a < b && a < c) {
        min1 = a;
    }
    else if (b < c && b < a) {
        min1 = b;
    }
    else if (c < a && c < b) {
        min1 = c;
    }
    if (d < e)
    {
        min2 = d;
    }
    else
        min2 = e;
    printf("%d", min1 + min2 - 50);
    return 0;
}