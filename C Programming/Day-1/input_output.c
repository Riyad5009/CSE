#include<stdio.h>
int main(){
    int age;
    char name[20];
    double bmi;
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your bmi:");
    printf("\nName:%s\nAge:%d",name,age);
    return 0;
}