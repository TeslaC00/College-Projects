#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;

	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void transfer(char[],char[]);
void checkbal(char*);

struct user{
    char user[25];
};

struct money{
    char userfrom[20];
    char userto[20];
    long money;
};

int main()
{
    int choice;

    gotoxy(20,3);
    printf("Welcome To Bank Account System\n");
    gotoxy(19,4);
    printf("********************************\n");
    gotoxy(22,6);
    printf("1..... Create New Account\n");
    gotoxy(22,7);
    printf("2..... Login\n");
    gotoxy(22,8);
    printf("3..... Exit\n");
    gotoxy(20,10);
    printf("Enter Your Choice.....");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        //account()
        //personaldetails()
        transfer("test1","test2");
        break;
    
    case 2:
        //login()
        checkbal("test1");
        break;
    
    case 3:
        exit(0);
        break;
    
    default:
        break;
    }
    return 0;
}

void transfer(char userto[20], char userfrom[20]){
    FILE *user, *money;
    struct user u;
    struct money m;
    user=fopen("users.txt","rb");
    money=fopen("money.txt","ab");
    /*printf("Type the account to transfer from");
    scanf(" %s",userfrom);
    printf("Type the account to transfer to");
    scanf(" %s",userto);*/
    while(fread(&u, sizeof(u), 1, user)){
        printf("yes\n");
        if(strcmp(userto,u.user)==0){
            strcpy(m.userfrom,userfrom);
            strcpy(m.userto,userto);
            printf("yes\n");
        }
    }
    printf("Type the amount to transfer");
    scanf(" %d",&m.money);
    fwrite(&m,sizeof(m),1,money);
    fclose(user);
    fclose(money);

}

void checkbal(char user[20]){//username of the person to check
    FILE *money;
    struct money m;//needs money structure
    money=fopen("money.txt","rb");//needs money file and in binary mode
    int total=0;
    printf("From\t\tTo\t\tAmount\n");
    while(fread(&m,sizeof(m),1,money)){
        if(strcmp(m.userto,user)==0){
            printf("%s\t\t%s\t\t%d\n",m.userfrom,m.userto,m.money);
            total+=m.money;
        }
    }
    printf("Total %d",total);

}