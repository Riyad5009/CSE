#include<stdio.h>
int main(){
    int age;
    char name [20];
    double bmi;

    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Ener your bmi:");
    scanf("%lf",&bmi);
    printf("Name: %s\nAge:%d\nBmi:%lf",name,age,bmi);
    return 0;
}