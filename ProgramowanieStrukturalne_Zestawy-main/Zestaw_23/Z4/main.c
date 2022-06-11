#include <stdio.h>
#include <stdlib.h>

struct node
{
    float x;
    struct node* next;
};

struct node* createList()
{
    return NULL;
}

struct node* addNode(struct node* List, float x)
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
        printf("%lf\n", p->x);
        p = p->next;
    }
    printf("=============\n");
}

int checkPositive(struct node* List1, struct node* List2)
{
    struct node* p = List1;
    struct node* w = List2;
    int l1 = 0;
    int l2 = 0;
    while(p != NULL)
    {
        if(p->x > 0)
            l1++;
        p = p->next;
    }
    while(w != NULL)
    {
        if(w->x > 0)
            l2++;
        w = w->next;
    }
    return (l1 == l2);
}

int main() {
    struct node* list1 = createList();
    struct node* list2 = createList();
    list1 = addNode(list1, 3.45);
    list1 = addNode(list1, 97.45);
    list1 = addNode(list1, 0.0024);
    list2 = addNode(list2, -7.15);
    list2 = addNode(list2, 17.3);
    list2 = addNode(list2, 7.15);
    list2 = addNode(list2, 0.43);

    printList(list1);
    printList(list2);
    printf("Wynik: %d", checkPositive(list1, list2));

    return 0;
}
