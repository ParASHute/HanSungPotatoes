#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100000

int main() {
    int T, a, b, val, c;
    int ca[MAX] = { 0 };
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        val = 1;
        scanf("%d %d", &a, &b);
        for (int j = 0; j < b; j++)
        {
            val = val * a;
            val = val % 10;
        }
        ca[i] = val;
    }
    for (int i = 0; i < T; i++)
    {
        int ans = ca[i];
        if (ans == 0)
        {
            printf("10\n");
        }
        else
            printf("%d\n", ans);
    }
    return 0;
}