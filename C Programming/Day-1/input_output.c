#include<stdio.h>
int main(){
    char name[50];
    int age;
    float bmi;
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your BMI:");
    scanf("%f",&bmi);
    printf("Name:%s\nAge:%d\nBMI:%f",name,age,bmi);
    return 0;
}