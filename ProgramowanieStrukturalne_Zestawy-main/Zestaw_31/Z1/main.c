#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a+*b;
}

int main()
{
    int tab[] = {3,1,-1,1,4,4,7};
    int *wsk=tab+1;
    int b = *(wsk+=4); //b= 4
    int c = b+2; // b= 4  , c= 6
    int d = foo(&b,&c); // b= 4 , c= 6 , d=10
    int e = (wsk+=-1)[3]; // b= 4 , c= 6  , d= 10  , e= 1
    b = *wsk + e+3; // b= 8 , c=6  , d=10  , e=1
    c = d - (b+=1); // b=9  , c=1  , d=10  , e=1
    e = (d -= 3) + (c += 2); // b=9  , c=3  , d=7  , e=10
    b= (--c)-(d++);  // b=-5  , c=2  , d=8  , e=10
    return 0;
}
