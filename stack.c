#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int val;
    struct stack *next;
};

struct stack *top=NULL;

int isempty(){
    if(top==NULL){
        return 1;
    }
    return 0;
}

void push(int val){
      struct stack *ptr=(struct stack *)malloc(sizeof(struct stack));
      ptr->val=val;
      if(isempty()){
        ptr->next=NULL;
        top=ptr;
        return;
      }else{
          ptr->next=top;
          top=ptr;
      }
}

void pop(){
    if(isempty()){
        printf("underflow");
        return;
    }
    top=top->next;
}

void display(){
    struct stack *temp=top;
    while(temp!=NULL){
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
      pop();
      display();
      push(10);
      display();
      push(20);
      push(30);
      display();
      push(40);
      display();
      pop();
      display();
}