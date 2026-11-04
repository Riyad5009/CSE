#include<stdio.h>
int main(){
    int arr1[3][2];
    int arr2[3][2];
    int ans[3][2];
    printf("Enter matrix 1:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter matrix 2:\n");
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The matrix addition is:\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        ans[i][j]=arr1[i][j]+arr2[i][j];
        printf("%d ",ans[i][j]);
    }
    printf("\n");
   }
    return 0;
}