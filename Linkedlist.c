#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

struct Node *head=NULL;

void insertAtbeg(int val){
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node ));
    if(ptr==NULL){
        printf("Over flow");
        return;
    }
    else{
        ptr->val=val;
        ptr->next=head;
        head=ptr;
    }
}
void insertAtlast(int val){
    if(head==NULL){
        head->val=val;
        head->next=NULL;
        return;
    }
    struct Node *temp=head;
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ptr->val=val;
    temp->next=ptr;
    ptr->next=NULL;
}

void inserAtpos(int val,int pos){
    if(pos==0){
        insertAtbeg( val);
        return;
    }
    struct Node *temp=head;
    struct Node *pre=NULL;
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    for(int i=0;i<pos-1;i++){
           pre=temp;
           temp=temp->next;
           if(temp==NULL){
            printf("invaild index \n");
            return;
           }
    }
    ptr->val=val;
    ptr->next=temp;
    pre->next=ptr;

}

void delAtbeg(){
    if(head==NULL){
        printf("under flow\n");
        return;
    }
    head=head->next;
}

void delAtlast(){
    struct Node *temp=head;
    struct Node *ptr=NULL;

    while(temp->next!=NULL){
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=NULL;
}

void delAtpos(int pos){
    struct Node *temp=head;
    struct Node *pre=NULL;
    if(pos==0){
        delAtbeg();
        return;
    }
    for(int i=0;i<pos-1;i++){
        pre=temp;
        temp=temp->next;
        if(temp==NULL){
            printf("Invaild position\n");
            return;
        }
    }
    pre->next=temp->next;
}

void display(){
    struct Node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");
}


int main(){
    insertAtbeg(5);
    insertAtbeg(10);
    display();
    insertAtlast(1);
    insertAtlast(2);
    display();
    inserAtpos(6,3);
    display();
    inserAtpos(0,0);
    display();
    inserAtpos(10,10);
    delAtbeg();
    display();
    delAtlast();
    display();
    delAtpos(3);
    display();
    delAtpos(10);
    

    
}