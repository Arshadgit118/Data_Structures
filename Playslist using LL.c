/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char data[100];
    struct Node*next;
    struct Node*prev;
};
struct Node*head=NULL;
struct Node*tail=NULL;
void push(const char *data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->data,data);
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
        printf("playlist is empty\n");
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
    printf("%s",head->data);
}
/*void reverse(){
    struct Node*temp=tail;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}*/

void display()
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%s ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    push("songa");
    push("songb");
    push("songc");
    push("songd");
    push("songe");
    pop();
    pop();
    display();
    peek();
   // pop();
    isEmpty();
    //reverse();
    display();
}

