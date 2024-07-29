#include<stdio.h>

void display(int arr[],int n){
      for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void insertAtbeg(int arr[],int val,int n){

    for(int i=1;i<=n;i++){
        arr[i]=arr[i-1];
    }
    arr[0]=val;
}

int main(){
    int n;
    printf("Enetr your number of elements in array : ");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    // for(int i=0;i<n;i++){
    //     printf("enter your element %d : ",i+1);
    //     scanf("%d",&arr[i]);
    //     printf("\n");
    // }
    // display(arr,n);
    insertAtbeg(arr,6,n);
    insertAtbeg(arr,5,n);
    display(arr,n);
}