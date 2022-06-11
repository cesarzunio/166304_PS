#include <stdlib.h>

struct node
{
    int x;
    struct node* next;
};

struct node* createList()
{
    return NULL;
}

struct node* addElement(struct node* List, int x)
{
    struct node* p = malloc(sizeof(struct node));
    p->x = x;
    p->next = List;
    return p;
}

void printList(struct node* List)
{
    struct node* p = List;
    while(p != NULL)
    {
        printf("%d\n", p->x);
        p = p->next;
    }
    printf("=======\n");
}


#include <stdlib.h>

struct node
{
    int i;
    struct node* next;
};

struct node* createListHead()
{
    struct node* p = malloc(sizeof(struct node));
    p->next = NULL;
    return p;
}

void addElementHead(struct node* List, int x)
{
    struct node* p = malloc(sizeof(struct node));
    p->i = x;
    p->next = List->next;
    List->next = p;
}

void printListHead(struct node* List)
{
    struct node* p = List;
    while(p->next != NULL)
    {
        p = p->next;
        printf("%d\n",p->i);
    }
    printf("=======\n");
}