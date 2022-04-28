#include <stdio.h>
#include <stdlib.h>

#define false 0
#define true 1
#define null (*(void(0)))

char* my_strcpy_tab(char* t, const char* s)
{
    char* p = t;

    int i = 0;

    while (t[i] = s[i++]) {}

    return p;
}

char* my_strcpy_pointer(char* t, const char* s)
{
    char* p = t;

    while (*(t++) = *(s++)) {}

    return p;
}

size_t my_strlen_tab(const char* s)
{
    size_t len = 0;
    int i = 0;

    while (s[i++]) ++len;

    return len;
}

size_t my_strlen_pointer(const char* s)
{
    size_t len = 0;

    while(*(s++)) ++len;

    return len;
}

char* my_strncpy_pointer(char* t, const char* s, int n)
{
    char* p = t;
    int m = 0;

    while((m++ < n) && (*(t++) = *(s++))) {}

    return p;
}

char* my_strncpy_tab(char* t, const char* s, int n)
{
    char* p = t;
    int m = 0;
    int i = 0;

    while ((m++ < n) && (t[i] = s[i++])) {}

    return p;
}

char* my_strcat_pointer(char* destination, const char* s)
{
    char* p = destination;

    while ((*destination)) { *(destination++); }

    while (*(destination) = *(s++)) { *(destination++); }

    *destination = '\0';

    return p;
}


char* my_strcat_tab(char* destination, const char* s)
{
    char* p = destination;
    int startIndex = 0;
    int sourceIndex = 0;

    while(destination[startIndex]) { startIndex++; }

    while(destination[startIndex] = s[sourceIndex++]) { startIndex++; }

    return p;
}

char* my_strncat_pointer(char* destination, const char* s, int n)
{
    char* p = destination;
    int m = 0;

    while ((*destination)) { *(destination++); }

    while ((m++ < n) && (*(destination) = *(s++))) { *(destination++); }

    *destination = '\0';

    return p;
}


char* my_strncat_tab(char* destination, const char* s, int n)
{
    char* p = destination;
    int startIndex = 0;
    int sourceIndex = 0;

    while(destination[startIndex]) { startIndex++; }

    while((sourceIndex < n) && (destination[startIndex] = s[sourceIndex++])) { startIndex++; }

    return p;
}

int main()
{
    if (false)
    {
        char* tekst = "lololol omgffffhfhjasdhas";

        char* kopia = calloc(strlen(tekst) + 1, sizeof(char));
        char* kopia2 = calloc(strlen(tekst) + 1, sizeof(char));

        my_strcpy_tab(kopia, tekst);
        my_strcpy_pointer(kopia2, tekst);

        printf("%s \n", kopia);
        printf("%s \n", kopia2);

        free(kopia);
        free(kopia2);
    }

    if (false)
    {
        char* tekst = "jakis tekst omffffff";

        printf("%d \n", my_strlen_tab(tekst));
        printf("%d \n", my_strlen_pointer(tekst));
    }

    if (false)
    {
        char* tekst = "lololol omgffffhfhjasdhas";

        char* kopia = calloc(my_strlen(tekst) + 1, sizeof(char));
        char* kopia2 = calloc(my_strlen(tekst) + 1, sizeof(char));

        my_strncpy_tab(kopia, tekst, 10);
        my_strncpy_pointer(kopia2, tekst, 10);

        printf("%s \n", kopia);
        printf("%s \n", kopia2);

        free(kopia);
        free(kopia2);
    }

    if (false)
    {
        char str[100] = {'\0'};

        my_strcat_pointer(str, "LOL");
        my_strcat_pointer(str, " NIE");
        my_strcat_pointer(str, " OK");
        my_strcat_pointer(str, " NIE OKEJ");

        printf("%s \n", str);
    }

    if (false)
    {
        char str[100] = {'\0'};

        my_strcat_tab(str, "LOL");
        my_strcat_tab(str, " NIE");
        my_strcat_tab(str, " OK");
        my_strcat_tab(str, " NIE OKEJ");

        printf("%s \n", str);
    }

    if (false)
    {
        char str[100] = {'\0'};

        my_strncat_pointer(str, "LOL", 2);
        my_strncat_pointer(str, " NIE", 2);
        my_strncat_pointer(str, " OK", 2);
        my_strncat_pointer(str, " NIE OKEJ", 2);

        printf("%s \n", str);
    }

    if (false)
    {
        char str[100] = {'\0'};

        my_strncat_tab(str, "LOL", 2);
        my_strncat_tab(str, " NIE", 2);
        my_strncat_tab(str, " OK", 2);
        my_strncat_tab(str, " NIE OKEJ", 2);

        printf("%s \n", str);
    }
}
