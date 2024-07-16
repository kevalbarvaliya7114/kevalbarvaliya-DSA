#include<stdio.h>
struct node{
    int data;
    char ch;
    struct node *ptr;
    int *p;
};
int main()
{
    struct node a, b;
    int c = 1505;
    a.data = 65;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 97;
    b.ch = 'a';
    b.ptr = NULL;

    printf("Value of A is:\ndata: %d,char: %c\n",a.data,a.ch);
    printf("Value of B is:\ndata: %d,char: %c\n",b.data,b.ch);

    a.ptr = &b;
    b.ptr = &a;
    printf("Value of B is:\ndata: %d,char: %c\n",a.ptr->data,a.ptr->ch);
    printf("Value of B is:\ndata: %d,char: %c\n",b.ptr->data,b.ptr->ch);

    a.p = &c;
    printf("%d\n",*(a.p));
}