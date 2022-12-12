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
        printf("1.List\n2.Issue book\n3.Remove book\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&i);
        switch(i){
            case 1: list(); break;
            case 2: issue(); break;
            case 3: rm(); break;
            case 4: exit(0); break;
        }

    }

    return 0;
}

void list(){}

void issue(){}

void rm(){}