#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[30]="224MtPpczteryyYXYZ";
    char z = *(napis+2); //z=52 '4'
    int a = napis[3]; // a=77   ,z=52 '4'
    z++; // a=77   ,z=53 '5'
    int b= a--; // a=76   , b=77  ,z=53 '5'
    z=(a-=2)+3; // a=74   , b=77  ,z=77 'M'
    a=a^4; // a=78   , b=77  ,z=77 'M'
    b=a+++b; // a=79   , b=155  ,z=77 'M'
    return 0;
}
