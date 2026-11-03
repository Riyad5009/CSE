#include<stdio.h>
int main(){
    int arr1[3][2];
    int arr2[3][2];
    int sum_ans[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter arr2:");
            scanf("%d",&arr1[i][j]);
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("Enter arr2:");
                scanf("%d",&arr2[i][j]);
            }
        }
        for(int i=0;i<3;i++){
                for(int j=0;j<2;j++){
                   int sum_ans=arr1[i][j] + arr2[i][j];
                }
            }
             for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                   printf("%d",sum_ans[i][j]);
                }
            }

    }
    return 0;
}