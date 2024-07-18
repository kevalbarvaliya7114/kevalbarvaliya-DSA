#include<iostream>
using namespace std;


struct node{
    int data;
    struct node *prev;
    struct  node *next;

};

struct Node *Head = NULL;

void display();
void push_first(int Data);
void push_back(int Data);
void push(int Data,int Element);
void pop_first(int Data);
void pop_back(int Data);
void pop(int Data, int Element);