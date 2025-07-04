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
void push(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=head;
    newNode->prev=NULL;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    else
    {
        tail=newNode;
    }
    head=newNode;
}
void isEmpty()
{
    if(head==NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf(" not empty\n");
    }
    
}
void pop()
{
    if(head==NULL)
    {
        isEmpty();
    }
    else
    {
    struct Node*temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
    }
}
void peek()
{
    printf("%d\n",head->data);
}
void reverse(){
    struct Node*temp=tail;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

void display()
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    push(10);
    push(90);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    display();
    peek();
   // pop();
    isEmpty();
    reverse();
    display();
}

