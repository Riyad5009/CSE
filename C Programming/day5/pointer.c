#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a;
    *ptr=8;
    printf("%d",a);
    return 0;
}