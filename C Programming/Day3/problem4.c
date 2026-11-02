#include<stdio.h>
int main(){
    int a=5;
    for(int i=1;i<=10;i++){
        int mul=a*i;
        printf("%d x %d= %d\n",a,i,mul);
    }
    return 0;
}