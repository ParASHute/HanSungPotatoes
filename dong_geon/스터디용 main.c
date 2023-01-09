#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int reverse(int n)
{    
    int r = 0;
    while (n) {
        r *= 10;
        r += n % 10;
        n /= 10;
    }
    return r;
}

void check(int x)
{
    int y;
    y = reverse(x);
    if (y == x)
        printf("YES\n");
    else
        printf("NO\n");
}

int main(void) {
    int T, n, i, sum = 0;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        sum = reverse(n) + n;
        check(sum);
    }
}

