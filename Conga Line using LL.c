/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
    struct Node*prev;
};
struct Node*head=NULL;
struct Node*tail=NULL;
void enqueue(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->prev=tail;
    newNode->next=NULL;
    if(head!=NULL)
    {
        tail->next=newNode;
    }
    else
    {
        head=newNode;
    }
    tail=newNode;
}
void dequeue()
{
    struct Node*temp=head;
    head=head->next;
    head->prev=NULL;
}
void display()
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    display();
    return 0;
}