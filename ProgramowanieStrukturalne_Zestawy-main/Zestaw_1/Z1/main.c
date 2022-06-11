#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[30]="dfjskhg3467834486";
    char w = *(napis+2); //w=106 'j'
    int x = napis[4]; // x=107   ,w=106 'j'
    w++; // x=107   ,w=107 'k'
    int b= x--; // x=106   , b=107  ,w=107 'k'
    w=(x-=9)+2; // x=97   , b=107  ,w=99 'c'
    x=x^4; // x=101   , b=107  ,w=99 'c'
    b=x+++b; // x=102   , b=208  ,w=99 'c'
    return 0;
}
