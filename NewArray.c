// You are using GCC
#include<stdio.h>

int *insertBeg(int a[],int t,int n){
    for(int i=n;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=t;
    return a;
}

int *insertPos(int a[],int t,int n,int pos){
    for(int i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=t;
    return a;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int pos;
    scanf("%d",&pos);
    int *ptr;
    ptr=insertBeg( arr,t,n);
     for(int i=0;i<n;i++){
         printf("%d",ptr[i]);
     }
    printf("\n");
    
    int *str=insertPos(arr,t,n,pos);
     for(int i=0;i<=n;i++){
         printf("%d",str[i]);
     }
}