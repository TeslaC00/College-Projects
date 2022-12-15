#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

void login(void);
void newacc(void);

int main(){

    int choice;
    printf("Welcome To Your Banking System\n");
    printf("1.Login\n2.Create New Account\n3.Exit\n");
    printf("Enter Your Choice ");
    scanf("%d",&choice);
    switch(choice){
        case 1: login(); break;
        case 2: newacc(); break;
        case 3: exit(0); break;
    }

}

void login(){}

void newacc(){}