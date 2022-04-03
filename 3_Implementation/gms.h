#include<windows.h>

#include<stdio.h>

#include<conio.h>

#include <stdlib.h>

#include<string.h>

#include<ctype.h>

#include<dos.h>

#include<time.h>



#define RETURNTIME 15



char catagories[][15]={"New Member","Coach","Staff"};

void returnfunc(void);

void mainmenu(void);

void addstaff(void);

void deletestaff(void);

void editstaff(void);

void searchstaff(void);

void viewstaff(void);

void closeapplication(void);

int  getdata();

int  checkid(int);

int t(void);



void Password();

void issuerecord();

void loaderanim();





FILE *fp,*ft,*fs;





COORD coord = {0, 0};



int s;

char findstaff;

char password[10]={"pass"};



void gotoxy (int x, int y)

{

coord.X = x; coord.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}



struct meroDate

{

int mm,dd,yy;

};

struct staff

{

int id;

char stname[20];

char name[20];

char Address[20];

char membersince[10];

int contact;

int count;

char *cat;

struct meroDate issued;

struct meroDate duedate;

};

struct staff a;

int main()

{

Password();

getch();

return 0;



}