#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Node{
    char data[100];
    struct Node*next;
    struct Node*prev;
};
struct Node*head=NULL;
struct Node*tail=NULL;

void visitdirectory(char *data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->data,data);
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    printf("%s\n",tail->data);
}
void goback()
{
    if(tail!=NULL && tail->prev!=NULL)
    {
        tail=tail->prev;
        printf("%s",tail->data);
    }
    else
    {
        printf("There is no directory to go back");
    }
}
void gofront()
{
    if(tail!=NULL && tail->next!=NULL)
    {
        tail=tail->next;
        printf("%s",tail->data);
    }
    else
    {
        printf("there is no directory to go");
    }
}
void current()
{
    if(tail==NULL)
    {
        printf("NO directory");
    }
    else
    {
        printf("%s",tail->data);
    }
}
void display()
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%s",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    char ch[100];
    int choice;
    while(1)
    {
    printf("\n");
    printf("1.Visit the directory:\n");
    printf("2.Go back to the previous directory:\n");
    printf("3.Go to the next directory:\n");
    printf("4.Examine the current directory:\n");
    printf("5.Exit the program\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the directory Name:\n");
        scanf("%s",ch);
        visitdirectory(ch);
        break;
        
        case 2:
        goback();
        break;
        
        case 3:
        gofront();
        break;
        
        case 4:
        current();
        break;
        
        case 5:
        printf("Exiting\n");
        return 0;
        
        default:
        printf("Inavlid choice");
        break;
    }
}
return 0;
}
