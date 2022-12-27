/* 백준 1212 8진수 2진수*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char p[333335];
    unsigned long a;
    
    scanf("%s", p);
    
    switch (p[0]) {
    case '0': printf("%s", "0"); break;
    case '1': printf("%s", "1"); break;
    case '2': printf("%s", "10"); break;
    case '3': printf("%s", "11"); break;
    case '4': printf("%s", "100"); break;
    case '5': printf("%s", "101"); break;
    case '6': printf("%s", "110"); break;
    case '7': printf("%s", "111"); break;
    }
    
    a = strlen(p);

    for (int i = 1; i < a; i++) {
        switch (p[i]) {
        case '0': printf("%s", "000"); break;
        case '1': printf("%s", "001"); break;
        case '2': printf("%s", "010"); break;
        case '3': printf("%s", "011"); break;
        case '4': printf("%s", "100"); break;
        case '5': printf("%s", "101"); break;
        case '6': printf("%s", "110"); break;
        case '7': printf("%s", "111"); break;
        }
    }
    
}
