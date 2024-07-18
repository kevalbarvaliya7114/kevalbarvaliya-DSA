#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void Display() {

   struct node *ptr = head;
   if(head!=NULL){
    cout<<ptr->data<<" ";
   while(ptr ->next != head) {        
      ptr = ptr->next;
      cout<<ptr->data<<" ";
   }}
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
void Push_First(int data)
{
    struct node *link = (struct node*) malloc(sizeof(struct node));
    struct node *ptr = head;
    if(head==NULL)
    {   link->data=data; 
        head = link;
        link->next = head;
        return;
    }
    while(ptr->next != head)
    {
        ptr=ptr->next;
    }
    link->data = data;
    link->next=head;
    head=link;
    ptr->next=head;
}
void Pop_First()
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
    //Push_Back(60);
 //   Display();
   // Pop_Back();
   // Push_First(100);
   // Push_First(10);
   // Push_First(1);
   // Push_First(20);
   // Push(1000,1);
   // Pop(100);
   // Push(10,100);
     // Pop_Back();
    //Pop_First();
    // Push_Back(10);
    // Push_Back(20);
    // Push_Back(30);
    // Push_Back(40);
    Push_First(50);
   // Display();
    // Push_First(100);
    // Push_First(10);
    // Push_First(1000);
    
   // Push(1,30);
   //Pop(30);
    // Pop_Back();
   
   
   
    // Pop_Back();
    // Pop_First();
    // Pop_First();
    
    Display();
    

    return 0;
}