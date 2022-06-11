#include <stdio.h>

int numlet(char* str);

int main() {
    char* napis = "AGAta5385h_93n ^#$";
    printf("Wynik: %d\n", numlet(napis));
    printf("%s", napis);
}

int numlet(char* str)
{
    int result = 0;
    while(*str != '\0')
    {
        if(((*str >= 48) && (*str <= 57)) || ((*str >= 65) && (*str <= 90)) || ((*str >= 97) && (*str <= 122)))
            result++;
        str++;
    }
    return result;
}