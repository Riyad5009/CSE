//assiment 2
#include<stdio.h>
int main(){
    char first_name[40];
    char last_name[40];
    int age;

    printf("Enter your first name:");
    scanf("%s",first_name);
    printf("Enter your last name:");
    scanf("%s",last_name);
    printf("Enter your age:");
    scanf("%d",&age);
    
    printf("Hello %s %s.you are %d Old",first_name,last_name,age);
    return 0;
}

// result:
// Enter your first name:abrar
// Enter your last name:riyad
// Enter your age:18
// Hello abrar riyad.you are 18 Old