#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void Display() {

   struct node *ptr = head;
   if(head==NULL){
        printf("Link Is Empty");
        return;}
    else{
   while(ptr ->next != head) {        
      printf("%d ",ptr->data);
      ptr = ptr->next;
   }
   return;
    }
}

void Push_Back(int data) {
    struct node *link = (struct node*) malloc(sizeof(struct node));
    struct node *ptr = head;
    link->data = data;
   
    if (head == NULL)
    {
        head = link;
        link->next = head;
        return;
    }
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = link;
    link->next = head;

    return;
}
void Pop_Back()
{
    struct node *ptr = head;
    struct node *ptr1;
    if(ptr->next==head)
    {
        head=NULL;
        return;
    }
    
   while(ptr->next != head) {
    ptr1=ptr;
    ptr = ptr->next;
   }
   ptr1->next=head;
}
void Push_Fast(int data)
{
    struct node *link = (struct node*) malloc(sizeof(struct node));
    struct node *ptr = head;
    if (head == NULL)
    {
        link->data = data;
        link->next=head;
        head=link;
        //return;
    }
    else{
    while(ptr->next != head)
    {
        ptr=ptr->next;
    }

    link->data = data;
    link->next=head;
    head=link;
    ptr->next=head;
    }
}
void Pop_Fast()
{
    struct node *ptr = head;
    struct node *ptr1 = head;

    while(ptr1->next != head)
    {
        ptr1=ptr1->next;
    }
    if(ptr->next==head)
    {
        head=NULL;
        return;
    }
    head= ptr->next;
    ptr1->next=head;
    
}
void Push(int data,int num)
{
    struct node *link = (struct node*) malloc(sizeof(struct node));
    struct node *ptr = head;
   
    link->data = data;
    if (head == NULL)
    {
        link->data = data;
        link->next=head;
        head=link;
        return;
    }
   
    while (ptr->data != num)
    {
        ptr = ptr->next;
    }
    if(ptr->next==head)
    {
        ptr->next = link;
        link->next=head;
        return;
    }else{
    
        link->next =ptr->next;
        ptr->next = link;
        return;
    }
   
}
void Pop(int num)
{
    struct node *ptr = head;
    struct node *ptr1;
    
   while(ptr->data != num) {
    ptr1=ptr;
    ptr = ptr->next;
   }
   
   ptr1->next=ptr->next;
}

int main()
{
   int n,e,k,p;
   Resend:
   printf("\n1.Display");
   printf("\n2.Insert Fast");
   printf("\n3.Insert Last");
   printf("\n4.Insert Eliment");
   printf("\n5.Delete Fast");
   printf("\n6.Delete Last");
   printf("\n7.Delete Eliment");
   
   printf("\n\n\n enter you choice:-");

    scanf("%d",&n);
    switch(n){
        case 1: 
            Display();
            goto Resend;
        case 2:
            printf("Enter you Eliment:-");
            //int e;
            scanf("%d",&e);
            Push_Fast(e);
            goto Resend;
        case 3:
            printf("Enter you Eliment:-");
            //int e;
            scanf("%d",&e);
            Push_Back(e);
            goto Resend;
        case 4:
            printf("Enter you Eliment:-");
            //int e;
            scanf("%d",&e);
            Display();
            //int k;
            printf("Enter your Position element :-");
            scanf("%d",&k);
            Push(e,k);
            goto Resend;
        case 5:
            Pop_Fast();
            goto Resend;
        case 6:
            Pop_Back();
            goto Resend;
        case 7:
            //int p;
            Display();
            printf("Enter yr element:-");
            scanf("%d",&p);
            Pop(p);
            goto Resend;
        default:
            return 0;
        }

    return 0;
}