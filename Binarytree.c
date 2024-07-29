// You are using GCC
#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node *left,*right;
};

struct node *root=NULL;

struct node *create(int val){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->val=val;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
struct node *insert(struct node *r,int val){
    if(r==NULL){
        return create(val);
    }
    else if(r->val<val){
        r->left=insert(r->left,val);
    }
    else{
        r->right=insert(r->right,val);
    }
    return r;
}


struct node *preOrder(struct node*r){
    if(r!=NULL){
    printf("%d ",r->val);
    preOrder(r->left);
    preOrder(r->right);}
}
struct node *inOrder(struct node*r){
    if(r!=NULL){
        
    inOrder(r->left);
    printf("%d ",r->val);
    inOrder(r->right);
    }
}
struct node *postOrder(struct node*r){
    if(r!=NULL){
        
    postOrder(r->left);
    postOrder(r->right);
    printf("%d ",r->val);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int val;
        scanf("%d",&val);
        root=insert(root,val);
    }
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
}


