/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node*head=NULL;
void insertAtBeg(int data)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    struct Node*temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=newNode;
    
}
void insertAtPos(int pos,int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    struct Node*temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void deleteAtBeg(){
    struct Node*temp=head;
    head=head->next;
}
void display()
{
    struct Node*temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
        
    }
}
int main()
{
    insertAtBeg(3);
    insertAtBeg(7);
    insertAtEnd(5);
    insertAtEnd(8);
    insertAtPos(3,10);
    deleteAtBeg();
    display();
}