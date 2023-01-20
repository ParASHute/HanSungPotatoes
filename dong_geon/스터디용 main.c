#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    int i, cnt = 0;
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ',')
            cnt++;
    }
    printf("%d", cnt + 1);
}