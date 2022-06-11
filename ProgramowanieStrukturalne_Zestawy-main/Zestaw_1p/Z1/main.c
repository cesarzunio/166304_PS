#include <stdio.h>

char* foo(char* napis1, char* napis2)
{
    return napis1;
}

int main() {
    char* s1 = "Agata";
    char* s2 = "Renata";
    printf("%s!\n", foo(s1, s2));
    return 0;
}
