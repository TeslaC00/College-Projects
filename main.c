#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
void list(void);
void issue(void);
void rm(void);
int main(){

    while(1){
        int i;
        system("cls");
        printf("Library Management System\n\n");
        printf("0.Exit\n1.List\n2.Issue book\n3.Remove book\n");
        printf("Enter your choice: ");
        scanf("%d",&i);
        switch(i){
            case 0: exit(0); break;
            case 1: list(); break;
            case 2: issue(); break;
            case 3: rm(); break;
        }

    }

    return 0;
}

void list(){}

void issue(){}

void rm(){}