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

int countList(struct element* List, int w)
{
    struct element* p = List;
    int result = 0;
    while(p != NULL)
    {
        if(p->x == w)
            result++;
        p = p->next;
    }
    return result;
}

int main() {
    struct element* list1 = createList();
    list1 = addElement(list1, 4);
    list1 = addElement(list1, 4);
    list1 = addElement(list1, 3);
    list1 = addElement(list1, 4);

    printf("Ile '4' na liscie: %d\n", countList(list1, 4));
    return 0;
}
