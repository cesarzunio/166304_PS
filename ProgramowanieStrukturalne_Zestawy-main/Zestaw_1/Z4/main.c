#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element* next;
};

struct element* create()
{
    return NULL;
}

struct element* addElement(struct element* List, int x)
{
    struct element* pointer = malloc(sizeof(struct element));
    pointer->x = x;
    pointer->next = List;
    return pointer;
}

void multElems(struct element* List, int w)
{
    struct element* wsk = List;
    while(wsk != NULL)
    {
        wsk->x *= w;
        wsk = wsk->next;
    }
}

int main() {
    struct element* l1 = create();
    l1 = addElement(l1, 1);
    l1 = addElement(l1, 2);

    multElems(l1, 3);

    struct element* wsk = l1;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->x);
        wsk = wsk->next;
    }
    return 0;
}
