#include<stdio.h>


int main(){
    int r1,r2,c1,c2;
    
    scanf("%d",&r1);
    scanf("%d",&c1);
    scanf("%d",&r2);
    scanf("%d",&c2);
    
    int mat1[r1][c1];
    int mat2[r2][c2];
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            int temp;
            scanf("%d",&temp);
            mat1[i][j]=temp;
        }
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            int temp;
            scanf("%d",&temp);
            mat2[i][j]=temp;
        }
    }
     
     if(c1!=r2){
         printf("not possible");
         return 0;
     }
    
    int res[r1][c2];
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++){
                res[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    
}