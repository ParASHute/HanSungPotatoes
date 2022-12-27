/* 1672 DNA 해독 : 못풀었음 */

#include <stdio.h>
#define MAX 1000000
int main(){
    
    int count;
    char dna;
    char DNA[MAX];
    
    scanf("%d",&count);
    
    for(int i = 0; i < count; i++){
        scanf("%c",&dna);
        DNA[i] = dna;
    }
    
    for(int i = count - 2; i < 0; i--){
        if(DNA[i] == 'AA')
            DNA[i] = 'A';
        if(DNA[i] == 'AG')
            DNA[i] = 'A';
        if(DNA[i] == 'AC')
            DNA[i] = 'A';
        if(DNA[i] == 'AT')
            DNA[i] = 'A';
        
        if(DNA[i] == 'GA')
            DNA[i] = 'A';
        if(DNA[i] == 'GG')
            DNA[i] = 'A';
        if(DNA[i] == 'GC')
            DNA[i] = 'A';
        if(DNA[i] == 'GT')
            DNA[i] = 'A';
        
        if(DNA[i] == 'CA')
            DNA[i] = 'A';
        if(DNA[i] == 'CG')
            DNA[i] = 'A';
        if(DNA[i] == 'CC')
            DNA[i] = 'A';
        if(DNA[i] == 'CT')
            DNA[i] = 'A';
        
        if(DNA[i] == 'TA')
            DNA[i] = 'A';
        if(DNA[i] == 'TG')
            DNA[i] = 'A';
        if(DNA[i] == 'TC')
            DNA[i] = 'A';
        if(DNA[i] == 'TT')
            DNA[i] = 'A';
    }
    
    printf("%c\n",&DNA);
}
