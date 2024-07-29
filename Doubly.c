#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *pre;
    struct node *next;
};
struct node *head;

void insertAtBeg(int val){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->val=val;
    if(head==NULL){
        ptr->next=NULL;
        ptr->pre=NULL;
        head=ptr;
    }
    else{
        ptr->next=head;
        head->pre=ptr;
        ptr->pre=NULL;
        head=ptr;
    }
}

void insertAtLast(int val){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *temp=head;
    if(head==NULL){
        insertAtBeg(val);
        return;
    }
    else{
        ptr->val=val;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->pre=temp;
        ptr->next=NULL;
    }
}

void insertAtPos(int val,int pos){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *temp=head;
    if(pos<1){
        printf("invaild");
        return;
    }
    if(pos==1){
        insertAtBeg(val);
    }
    else{
        ptr->val=val;
        for(int i=0;i<pos;i++){
            if(temp==NULL && i==pos-1){
                insertAtLast(val);
                return;
            }
            else if(temp==NULL){
                printf("Invaild positon \n");
                return;
            }
           temp=temp->next;
        }
        ptr->next=temp;
        ptr->pre=temp->pre;
        temp->pre=ptr;
    }
}

void display(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");
}


int main(){
    insertAtBeg(1);
    insertAtBeg(2);
    insertAtBeg(3);
    display();
    insertAtLast(4);
    insertAtLast(5);
    display();
    insertAtPos(0,1);
    display();
    insertAtPos(10,3);
    display();
    // insertAtPos(-1,8);
    // display();
}