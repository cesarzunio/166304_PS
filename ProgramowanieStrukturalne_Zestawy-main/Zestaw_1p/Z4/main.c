#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element* next;
};

struct element* createList()
{
    return NULL;
}

struct element* addElement(struct element* List, int x)
{
    struct element* p = malloc(sizeof(struct element));
    p->x = x;
    p->next = List;
    return p;
}

void printhdtl(struct element* List)
{
    if(List == NULL)
    {
        printf("NULL");
    }
    else
    {
        printf("Poczatek: %p\n", List);
        struct element* p = List;
        while(p->next != NULL)
            p = p->next;
        printf("Koniec: %p\n", p);
    }
}

int main() {
    struct element* list1 = createList();
    list1 = addElement(list1, 5);
    list1 = addElement(list1, 9);
    printhdtl(list1);
    return 0;
}
