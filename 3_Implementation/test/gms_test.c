#include "unity.h"
#include <gms.h>

/* Modify these two lines according to the project */
#include <gms.h>
#define PROJECT_NAME    "Gym Management System"

/* Prototypes for all the test functions */

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


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_editstaff);
  RUN_TEST(test_searchstaff);
  RUN_TEST(test_password);
  RUN_TEST(test_viewstaff);
  RUN_TEST(test_mainmenu);
  RUN_TEST(test_removestaff);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
int i;

gotoxy(20,3);

printf(" \t\tMAIN MENU \n ");

printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");




gotoxy(20,5);

printf("<1> Add Members   ");

gotoxy(20,7);

printf("<2> Remove Members");

gotoxy(20,9);

printf("<3> Search Members");

gotoxy(20,11);

printf("<4> View Member's list");

gotoxy(20,13);

printf("<5> Edit Members Record");

gotoxy(20,15);

printf("<6> Close Application");

gotoxy(20,22);

t();

gotoxy(20,18);

printf("Enter your choice:");



switch(getch())

{

case '1':

addstaff();

break;

case '2':

deletestaff();

break;

case '3':

searchstaff();

break;

case '4':

viewstaff();

break;

case '5':

editstaff();

break;

case '6':

{

system("cls");

gotoxy(16,3);

printf("\tGYM Management System");

gotoxy(16,4);

printf("\tProject in C");

gotoxy(16,5);

printf("\tis brought to you by");

gotoxy(16,7);

printf("\tMukesh Project");

gotoxy(16,8);



exit(0);

}
