#include <stdio.h>
#include <stdlib.h>

struct node
{
    int i;
    struct node* next;
};

struct node* createHead()
{
    struct node* pointer = malloc(sizeof(struct node));
    pointer->next = NULL;
    return pointer;
}

void addElementHead(struct node* List, int x)
{
    struct node* pointer = malloc(sizeof(struct node));
    pointer->i = x;
    pointer->next = List->next;
    List->next = pointer;
}

int checkLast(struct node* List1, struct node* List2)
{
    if ((List1->next == NULL) || (List2->next == NULL))
        return 0;
    struct node* wsk1 = List1;
    struct node* wsk2 = List2;
    while(wsk1->next != NULL)
        wsk1 = wsk1->next;
    while(wsk2->next != NULL)
        wsk2 = wsk2->next;
    if (wsk1->i == wsk2->i)
        return 1;
    return 0;
}

int main() {
    struct node* l1 = createHead();
    addElementHead(l1, 1);
    addElementHead(l1, 2);

    struct node * wsk0 = l1;
    while(wsk0->next!=NULL)
    {
        wsk0=wsk0->next;
        printf("%d\n",wsk0->i);
    }

    printf("+++++++++++\n");

    struct node* l2 = createHead();
    addElementHead(l2, 1);
    addElementHead(l2, 7);

    struct node * wsk1 = l2;
    while(wsk1->next!=NULL)
    {
        wsk1=wsk1->next;
        printf("%d\n",wsk1->i);
    }

    printf("+++++++++++\n");

    printf("Wynik: %d", checkLast(l1, l2));
    return 0;
}
