#include<stdio.h>
#include<stdlib.h>


struct Nodes{
    int data;
    struct Nodes *Next;
};


void Traversal(struct Nodes *ptr)
{
    while(ptr!=NULL)
    {
        printf("\t\t\n %d ", ptr->data);
        ptr = ptr->Next;
    }
    printf("\n");
}

//Case 1:-
struct Nodes *Insertion_in_Begin(struct Nodes *Head, int data)
{
    struct Nodes *ptr = (struct Nodes*)malloc(sizeof(struct Nodes));
    ptr ->Next = Head;
    ptr->data = data;
    return ptr;

}

//Case 2:-
struct Nodes *Insertion_Between(struct Nodes *Head, int data, int Index)
{
    struct Nodes *ptr = (struct Nodes*)malloc(sizeof(struct Nodes));
    struct Nodes *p = Head;
    int i=0;
    while(i!=Index-1)
    {
        p = p->Next;
        i++;
    }
    ptr->data = data;
    ptr->Next = p->Next;
    p->Next = ptr;
    return Head;
}

//Case 3:-

struct Nodes *Insertion_at_end(struct Nodes *Head, int data)
{
    struct Nodes *ptr = (struct Nodes*)malloc(sizeof(struct Nodes));
    ptr->data = data;
    struct Nodes *p=Head; 
    while(p->Next != NULL)
    {
        p = p->Next;
    }
    p->Next = ptr;
    ptr->Next =NULL;
    return Head;
}

//case 4:-

struct Nodes *Insertion_at_nodes(struct Nodes *Head, struct Nodes *Prevnodes, int data)
{
    struct Nodes *ptr =(struct Nodes *)malloc(sizeof(struct Nodes));
    ptr->data = data;

    ptr->Next = Prevnodes->Next;
    Prevnodes->Next = ptr;

    return Head;
}


int main()
{

   struct Nodes *Head;
    struct Nodes *Second;
    struct Nodes *third;
    struct Nodes *fourth;

    //Allocation of dynamic memory to the linked list elements
    Head = (struct Nodes*)malloc(sizeof(struct Nodes));
    Second = (struct Nodes*)malloc(sizeof(struct Nodes));
    third = (struct Nodes*)malloc(sizeof(struct Nodes));
    fourth = (struct Nodes*)malloc(sizeof(struct Nodes));

    //connect head to second:-
    Head->data = 12;
    Head->Next = Second;

    //Connect second to third:-

    Second->data=15;
    Second->Next = third;

    //Connect third to fourth:-

    third->data = 18;
    third-> Next = fourth;

    //Connect fourth to NULL:-

    fourth->data = 21;
    fourth->Next = NULL;

    printf("The Element of Linked List:- \n");
    Traversal(Head);
    
        
   //case 1: 
            Head = Insertion_in_Begin(Head, 154);
            printf("\nThe element of LinkedList After Insertion at Index Beginning :- \n");
            Traversal(Head);

   //case 2-
            Insertion_Between(Head, 45, 2);
            printf("\nThe element of LinkedList After Insertion at Index 2 :- \n");
            Traversal(Head);

    //case 3:
            Insertion_at_end(Head, 98);
            printf("\n The element of Linked List After insertion at End");
            Traversal(Head);

    //case 4:
            Insertion_at_nodes(Head, third, 3);
            printf("\n The element of linked list after insertion at given nodes");
            Traversal(Head);

return 0;
}
