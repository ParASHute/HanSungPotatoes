#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int L, P;
    int a, b, c, d, e;
    int val;
    int A, B, C, D, E;
    scanf("%d %d", &L, &P);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    val = L * P;
    if (a == val)
    {
        A = 0;
    }
    else if (a != val)
    {
        A = a - val;
    }
    if (b == val)
    {
        B = 0;
    }
    else if (b != val)
    {
        B = b - val;
    }
    if (c == val)
    {
        C = 0;
    }
    else if (c != val)
    {
        C = c - val;
    }
    if (d == val)
    {
        D = 0;
    }
    else if (d != val)
    {
        D = d - val;
    }
    if (e == val)
    {
        E = 0;
    }
    else if (e != val)
    {
        E = e - val;
    }
    printf("%d %d %d %d %d", A, B, C, D, E);
    return 0;
}