#include<stdio.h>

struct user{
    char username[50];
	int date, month, year;
	char pnumber[15];
	char adharnum[20];
	char fname[20];
	char lname[20];
	char fathname[20];
	char mothname[20];
	char address[50];
	char typeaccount[20];
    char password[20];
};

void accountdetails(char*);

int main(){
    accountdetails("vikas");
    return 0;
}
void accountdetails(char user[20]){
    FILE *fp;
    struct user u;
    fp=fopen("user.txt","r");
    while(1){
    fscanf(fp,"%s\t%d\t%d\t%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s",u.username,&u.date,&u.month,&u.year,u.pnumber,u.adharnum,u.fname,u.lname,u.fathname,u.mothname,u.address,u.typeaccount,u.password);
    printf("%s\t%d\t%d\t%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s",u.username,u.date,u.month,u.year,u.pnumber,u.adharnum,u.fname,u.lname,u.fathname,u.mothname,u.address,u.typeaccount,u.password);
    }
    fclose(fp);
}