#include<stdio.h>
int main(){
    int i=0,x=1,sum=0;
    while(x!=0){
        printf("Enter a number:");
        scanf("%d",&x);
        sum=sum+x;
        printf("Sum:%d\n",sum);
    }
    printf("Total number:%d",sum);
    return 0;
}