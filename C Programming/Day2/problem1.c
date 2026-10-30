//problme:Take a number N as input and print whether even or odd
#include<stdio.h>
int main(){
    int n;
     printf("Given a number:");
     scanf("%d",&n);
     if(n%2==0){
        printf("It's an even number");
     }
     else{
        printf("It's an odd number");
     }
    return 0;
}