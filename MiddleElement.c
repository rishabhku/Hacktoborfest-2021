#include<stdio.h>
#include<stdlib.h>

struct nodes
{
    int data;
    struct nodes *next;
};

struct nodes* traverse(struct nodes* ptr)
{

    while(ptr!= NULL)
    {
        printf("Element is :- %d\n", ptr->data);
        ptr= ptr->next;
    }
}


struct nodes* MiddleElement(struct nodes* Head)
{
    struct nodes *ptr = Head;
    struct nodes *p = Head;


    if(Head!=NULL)
    {
    while(ptr->next != NULL && ptr->next->next !=NULL)
        {
            ptr=ptr->next->next;
            p=p->next;
        }

    printf("\n");
    printf("The middle element of linked list is %d\n",p->data);
        
    }
    return 0;
}


int main()
{
    struct nodes *Head;
    struct nodes *Second;
    struct nodes *Third;
    struct nodes *fourth;
    struct nodes *fifth;

    Head = (struct nodes*)malloc(sizeof(struct nodes));
    Second = (struct nodes*)malloc(sizeof(struct nodes));
    Third = (struct nodes*)malloc(sizeof(struct nodes));
    fourth = (struct nodes*)malloc(sizeof(struct nodes));
    fifth = (struct nodes*)malloc(sizeof(struct nodes));


    Head ->data =12;
    Head->next =Second;

    Second->data =23;
    Second->next = Third;

    Third->data = 34;
    Third->next = fourth;

    fourth->data = 45;
    fourth->next = fifth;

    fifth->data =56;
    fifth->next = NULL;


    traverse(Head);
    Head = MiddleElement(Head);
    
return 0;
}
