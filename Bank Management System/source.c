#include<stdio.h>
#include<conio.h>

struct user{
    char username[25];
    char password[10];
    char fname[15];
    char lname[15];
    char faname[20];
    char maname[20];
    int date,month,year;
    char address[50];
    char accType[20];
};

void login(char*,char*);
void newID(void);

int main(){

    int choice;
    printf("Welcome to My Bank\n");
    printf("\n1.Login\n2.New user, create an account\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: login("test","test"); break;
        case 2: newID(); break;
        default : printf("Enter a valid option");
    }

    return 0;
}

void login(char uname[25], char upass[10]){}

void newID(){}