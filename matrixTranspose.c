#include<stdio.h>

int main(){
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r*2][c*2];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int temp;
            scanf("%d",&temp);
            a[i][j]=temp;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}