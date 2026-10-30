#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>18){
        printf("You can vote");
    }
    else{
        printf("Go to home kid");
    }
    return 0;
}

// output:
// Enter your age:20
// You can vote