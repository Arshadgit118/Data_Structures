#include <stdio.h>
#include<stdlib.h>
struct Node{
    char *clue;
    int ans;
    struct Node* next;
    struct Node* prev;
};
struct Node* head=NULL;
struct Node* tail=NULL;
void hints(char *s,int data){
    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    new->clue=s;
    new->ans=data;
    new->prev=tail;
    if(head!=NULL){
        tail->next=new;
    }
    else{
        head=new;
    }
    tail=new;
   
}
void ChanceofBikeHunt(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%s\n",temp->clue);
        int n;
        scanf("%d",&n);
        if(n==temp->ans){
            temp=temp->next;
        }
        else{
            printf("Better luck next time!\n");
            return;
        }
    }
    printf("Congrats! Yo have Won the mystry bike coupon\n");
}
int main()
{
    hints("No of wheels a bike have",2);
    hints("No of brakes in a bike",6);
    hints("No of gears in a simple bike?",5);
    hints("how many seats does a bike have",2);
    ChanceofBikeHunt();
    return 0;
}
