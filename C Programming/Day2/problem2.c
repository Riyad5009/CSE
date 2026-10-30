#include<stdio.h>
int main(){
    int angle1;
    int angle2;
    int angle3;
         printf("Enter angle 1:");
           scanf("%d",&angle1);
         printf("Enter angle 2:");
           scanf("%d",&angle2);
         printf("Enter angle 3:");
           scanf("%d",&angle3);
    if(
        (angle1>0 && angle1<180)&&
        (angle2>0 && angle2<180)&&
        (angle3>0 && angle3<180)
    ){
     if(angle1+angle2+angle3==180){
          printf("The triangle is valid");
     }
     else{
        printf("The tringle is not valid");
     }
    }
    else{
        printf("The tringle are not vaild");
    }
    return 0;
}