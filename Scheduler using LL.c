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
void scheduledFirst(int data)
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
void AfterSchedule()
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
    //scheduledFirst(1);
    //scheduledFirst(2);
    scheduledFirst(3);
    scheduledFirst(10);
    AfterSchedule();
    display();
    return 0;
}
