//assiment 3
#include<stdio.h>
int main(){
    double temp,conv;
    char unit;
    printf("Enter temperature:");
    scanf("%lf",&temp);
    getchar();
    printf("Enter unit f/c:");
    scanf("%c",&unit);
    if(unit=='c'){
        double f=temp*(9.0/5)+32;
        printf("converted to farenhite:%3lf\n",f);
    }
    else{
        double c=(temp-32)*9.0/5;
        printf("Converted to cesius:%3lf\n",c);
    }
    return 0;
}