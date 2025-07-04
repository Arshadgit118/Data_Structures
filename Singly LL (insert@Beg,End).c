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
};
struct Node*head=NULL;
void insertAtBeg()
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data for begin:");
    scanf("%d",&newNode->data);
    //newNode->data=data;
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data for end:");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    struct Node*temp=head;
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void reverse(int n)
{
    
}

void display()
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    insertAtBeg();
    insertAtBeg();
    insertAtEnd(12);
    display();
}

