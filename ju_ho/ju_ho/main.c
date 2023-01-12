#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char c1[10] = { 0 };
    char c2[10] = { 0 };
    scanf("%s %s", c1, c2);
    c1[5] = c1[0];
    c1[4] = c1[1];
    c1[3] = c1[2];
    c2[5] = c2[0];
    c2[4] = c2[1];
    c2[3] = c2[2];
    if (c1[3] > c2[3])
    {   
        for (int i = 3; i < 6; i++)
        {
            printf("%c", c1[i]);
        }
    }
    else if (c1[3] == c2[3] && c1[4] > c2[4])
    {
        for (int i = 3; i < 6; i++)
        {
            printf("%c", c1[i]);
        }
    }
    else if (c1[3] == c2[3] && c1[4] == c2[4] && c1[5] > c2[5])
    {
        for (int i = 3; i < 6; i++)
        {
            printf("%c", c1[i]);
        }
    }
    else {
        for (int i = 3; i < 6; i++)
        {
            printf("%c", c2[i]);
        }
    }
    return 0;
}