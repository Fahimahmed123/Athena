#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <time.h>

#include "ui.h"
#include "book_code.h"
#include "io.h"
#include "signin.h"








int password(const char *name_input, const char *password_input);
int registration();
void heading();
void welcome();
int search();
void viewBook();
void mainMenu();
void edit();
void save();
int load(char *filepath);
void delete ();
int loadinfo(char *filepath, int n);
int saveinfo(char *filepath, int n);
void saveuserinfo(char *filepath);
void borrow();
void returnbook();
void help();
int loaduserinfo();
void setCord(int x, int y);
void setColor(int color);
void print_center(int row, char *s);
void setCord(int x, int y);
int printMenu();
int printSignin();
int printSearchMenu();
int printDeleteMenu();
int printSaveMenu();
int printEditMenu();
int printLoadMenu();
int printBorrowMenu();
int printReturnMenu();
int check(char *in);
int printCheckMenu();
void encrypt(char *FILENAME, char *key);

int main()
{
    system("COLOR 11");
    welcome();
    // heading();

    int choice, amount = 0;
    capacity.users = 1;


    char name_input[100], password_input[100];

    system("cls");


    choice = printSignin();//UI used for taking choice input

    choice++;

    if (choice == 1) //Log in system
    {
        int attempt=4;
        while(attempt--)
        {

            system("cls");
            setColor(red);
            printf("\n\n\t\t You have %d attempt(s) remaining!!\n\n",attempt);
            printf("\n\t\t\t ***************************************");
            setColor(light_yellow);
            printf("\n\t\t\t Enter Username :");
            scanf(" %[^\n]", name_input);
            printf("\n\t\t\t Enter Password :");
            int passCount = 0;
            while(1)
            {

                char ch = _getch();
                if (ch == 13)
                {
                    password_input[passCount] = '\0';
                    break;
                }

                else if(ch != 8)
                {
                    setCursorPosition(42+passCount,8);
                    password_input[passCount] = ch;
                    passCount++;
                    printf("*");
                }
                else if(ch == 8)
                {
                    passCount--;
                    setCursorPosition(42+passCount,8);
                    printf(" ");

                }

            }
            //scanf(" %[^\n]", password_input);
            printf("\n\t\t\t ***************************************");

            int r;
            r = password(name_input, password_input);
            if (r!=-1 && r<1000) //if username and password matches
            {
                printf("\n\t\t\t< ...... Log in Success! ...... >\n");
                printf("\n\t\t\t  ~~~~~~ Welcome Mr. %s ~~~~~~ ", sign[r].username);
                printf("\n\n\t\t\t\t\t  < Before starting read the guidelines >");
                help();
                getchar();
                system("cls");
                mainMenu();
                break;
            }
            else
            {
                if(attempt==1)
                {
                    int i, len;
                    system("cls");
                    if(r>=1000) //When password is wrong then it resets
                    {
                        system("cls");
                        printf("\n\t\tUsername found but Password incorrect.Please input correct password or Register to gain access\n\n");
                        printf("\n\t\t\tWould you like to reset your Password ?(Enter Yes if so)\n\n");
                        char ans[4];
                        scanf("%s",ans);

                        if(strcmp(ans,"Yes")==0)
                        {
                            system("cls");
                            if(strcmp(name_input,sign[0].username)!=0)
                            {
                                printf("\n\t\t\tPlease enter your Username: ");
                                char username[100];
                                scanf(" %[^\n]",username);

                                len = loaduserinfo();
                                // printf("%d\n",len);
                                capacity.users = len;
                                for (i = 0; i < len; i++)
                                {
                                    int a;
                                    a = strcmp(username, sign[i].username);
                                    if (a == 0)
                                    {
                                        break;
                                    }
                                }
                                if(i==len) //when we dont have record of the users
                                {
                                    printf("\n\t\t\tSorry!Username does not exist.Please Register\n");
                                    int w;
                                    w = registration();
                                    if (w == 1)
                                    {
                                        system("cls");
                                        help();
                                        system("cls");
                                        mainMenu();
                                        break;
                                    }

                                    else
                                        exit(0);
                                }

                                else //verification system
                                {
                                    system("cls");
                                    printf("\n\t\t\tCongratulations!!Successful request for changing Password received!!\n\n");
                                    printf("\n\t\t\tYou will receive an authentication code within some time.\n\n");
                                    srand(time(NULL));
                                    int authentication=rand()%1000000;
                                    //sleep(5);
                                    printf("\n\t\t\tYour verification code is %06d\n\n",authentication);
                                    fflush(stdin);
                                    int verify;
                                    printf("\n\t\t\tPlease enter your verification code: ");
                                    scanf(" %d",&verify);
                                    if(verify==authentication)
                                    {
                                        system("cls");
                                        printf("\n\t\t\tCongratulations!!You have successfully entered verification code.\n\n");
                                        printf("\n\t\t\tNow you can set new Password\n\n");
                                        char newpassword[100];
                                        scanf(" %s",newpassword);
                                        strcpy(sign[i].pass,newpassword);
                                        capacity.users--;
                                        saveuserinfo("user.bin");
                                        printf("\n\t\t\tPassword change Successful!!\n");
                                        system("cls");
                                        mainMenu();
                                        break;
                                    }
                                    else
                                    {
                                        system("cls");

                                        printf("\n\t\t\tWrong code!!Terminating!!!\n");
                                        exit(0);
                                    }
                                }
                            }
                            else
                            {
                                system("cls");
                                setColor(cyan);
                                printf("\n\n\t\t\tWhen is the Minotaur's owner as high as an elephant's eye?\n\n");
                                char answer[20];
                                scanf(" %s",answer);
                                if(strcmp(answer,"A maze")==0 || strcmp(answer,"Corn")==0)
                                    printf("\n\t\t\tCongratulations.Answer is correct.\n");
                                else
                                    exit(0);
                                system("cls");
                                setColor(blue);
                                printf("\n\t\tI have billions of eyes,yet I live in Darkness\n\n");
                                printf("\n\t\tI have millions of ears,yet only four Lobes\n\n");
                                printf("\n\t\tI have no muscle, yet I rule two Hemispheres.\n\n");
                                printf("\n\t\t\t\t\tWhat am I?\n\n");
                                scanf(" %s",answer);
                                if(strcmp(answer,"Brain")==0)
                                    printf("\n\t\t\tCongratulations!! Your answer is correct!!");
                                else
                                    exit(0);
                                system("cls");
                                setColor(green);
                                printf("\n\nCongratulations!!You have successfully answered the questions.You can reset your Password.\n");
                                char newpassword[100];
                                setColor(cyan);
                                scanf(" %s",newpassword);
                                strcpy(sign[0].pass,newpassword);
                                capacity.users--;
                                saveuserinfo("user.bin");
                                setColor(green);
                                printf("\n\t\t\tPassword change Successful!!\n");
                                system("cls");
                                mainMenu();
                                break;
                            }
                        }
                        else //when the use doesn't exist it takes to registration menu
                        {
                            system("cls");
                            setColor(red);
                            printf("\n\n\t\t\tUser does not exist.Please Register\n\n");
                            int w;
                            w = registration();
                            if (w == 1)
                            {
                                system("cls");
                                help();
                                system("cls");
                                mainMenu();
                                break;
                            }
                            else
                                exit(0);
                        }

                    }
                    else
                    {
                        system("cls");
                        setColor(red);
                        printf("\n\n\t\t\tUser does not exist.Please Register\n\n");
                        int w;
                        w = registration();
                        if (w == 1)
                        {
                            system("cls");
                            help();
                            system("cls");
                            mainMenu();
                            break;
                        }
                        else
                            exit(0);
                    }
                }
                setColor(red);
                printf("\n\t\t\tInvalid Information.Please retry!!!\n");
                getch();
            }

        }
    }

    else if (choice == 2)
    {
        system("cls");
        int r;
        r = registration();
        if (r == 1)
        {
            system("cls");
            help();
            system("cls");
            mainMenu();
        }
    }
}






