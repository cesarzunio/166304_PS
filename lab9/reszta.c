#include <stdio.h>
#include <stdlib.h>

#define bool int
#define false 0
#define true 1
#define null (*(void(0)))

size_t my_strlen_pointer(const char* s)
{
    size_t len = 0;

    while(*(s++)) ++len;

    return len;
}

bool my_strend_tab(const char* s, const char* t)
{
    int t_len = my_strlen_pointer(t);
    int s_len = my_strlen_pointer(s);

    for (int i = 0; i < t_len; ++i)
    {
        if (t[t_len - i - 1] != s[s_len - i - 1]) return false;
    }

    return true;
}

bool my_strend_pointer(const char* s, const char* t)
{
    while (*(s)) { s++; }
    while (*(t)) { t++; }

    --s;
    --t;

    while ((*(t)))
    {
        if (*(t--) != *(s--)) return false;
    }

    return true;
}

int my_strindex_tab(const char* s, const char* t)
{
    int t_len = my_strlen_pointer(t);
    int s_len = my_strlen_pointer(s);

    int j = 0;
    bool check = false;

    for (int i = 0; i + t_len <= s_len; ++i)
    {
        if (s[i] == t[0])
        {
            check = true;

            for (j = 1; j < t_len; ++j)
            {
                if (s[i + j] != t[j])
                {
                    check = false;
                    break;
                }
            }

            if (check == true) return i;
        }
    }

    return -1;

}

int main()
{
    if (false)
    {
        char* s = "lolololoo teskttttt check";
        char* t = "check";
        char* t2 = "  check";

        printf("%d\n", my_strend_tab(s, t));
        printf("%d\n", my_strend_tab(s, t2));
    }

    if (false)
    {
        char* s = "lolololoo teskttttt check";
        char* t = "check";
        char* t2 = "  check";

        printf("%d\n", my_strend_pointer(s, t));
        printf("%d\n", my_strend_pointer(s, t2));
    }

    if (true)
    {
        char* t = "tekst";
        char* s = "jdjdjdjdjjdjdtekst";

        printf("%d\n", my_strindex_tab(s, t));
    }
}
