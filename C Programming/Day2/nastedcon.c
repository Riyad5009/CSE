#include<stdio.h>
int main(){
    int a;
      printf("Enter a number:");
      scanf("%d",&a);
      if(a>0){
        printf("the number is positibe");
      }
      else if(a==0){
        printf("The number is equal of zero");
      }
      else{
        printf("The number is positive");
      }
    return 0;
}

// result:
// Enter a number:5
// the number is positibe