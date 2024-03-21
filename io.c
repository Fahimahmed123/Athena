#include "io.h"
#include "book_code.h"
#include"ui.h"
#include "signin.h"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>



int load(char *filepath) // deserialization
{

    FILE *fp = fopen(filepath, "r");
    // encrypt(filepath,"Excallibur");
    int i, len;
    if (!fp)
    {
        printf("\n\t\t\t< ERROR!!! >");
        exit(1);
    }
    else
    {
        fscanf(fp, "\n\t\t\t********* Total Books  : %d *********", &len);
    }
    fgetc(fp);
    if (!fp)
        return -1;

    for (i = 0; i < len; i++)
    {


        fgets(b[i].id, 15, fp);
        //  b[i].id[strlen(b[i].id) - 2] = '\0';
        fgets(b[i].name, 100, fp);
        //  b[i].name[strlen(b[i].name) - 2] = '\0';
        fgets(b[i].author, 100, fp);
        //  b[i].author[strlen(b[i].author) - 2] = '\0';
        fgets(b[i].genre, 100, fp);
        //  b[i].genre[strlen(b[i].genre) - 2] = '\0';

        fscanf(fp, "%d", &b[i].quantity);
        fscanf(fp, "%d\n", &b[i].shelf);
    }
    // free(b);
    fclose(fp);
    //encrypt(filepath,"Excallibur");
    return len;
}

//this deletes the whole book profile through different criteria

void delete ()
{
    system("cls");
    setColor(light_yellow);
    printf("\n\t\t\t######### Welcome to Delete Menu #########");
    int choice, in;
    char input[100], change[100];

    system("cls");
    choice = printDeleteMenu();
    choice = choice + 1;
    system("cls");
    fflush(stdin);
    if (choice == 1)//this deletes by searching through ISBN
    {
        system("cls");
        setColor(light_yellow);
        printf("\n\t\t\t Enter ISBN  :");
        // scanf("%s", &input);
        gets(input);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h, j;
            // h = strcmp(input, b[i].id);
            if (strstr(b[i].id, input) != NULL)
            {
                for (j = i; j < capacity.count; j++)
                {
                    b[j] = b[j + 1];
                }
                capacity.count--;
                setColor(green);
                printf("\n\t\t\t< Deleting Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        setColor(red);
        printf("\n\t\t\t< Delete failed!!!Entered ISBN doesn't exist in the list >");
        printf("\n\t\t\t Enter any key to continue......");
        getch();
        system("cls");
        return;
    }
    else if (choice == 2)//this searches by book name and delete that profile
    {
        system("cls");
        setColor(light_yellow);
        printf("\n\t\t\t Enter Book Name :");
        gets(input);
        // scanf("%s", &input);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h, j;
            // h = strcmp(input, b[i].name);
            if (strstr(b[i].name, input))
            {
                for (j = i; j < capacity.count; j++)
                {
                    b[j] = b[j + 1];
                }
                capacity.count--;
                setColor(green);
                printf("\n\t\t\t< Deleting Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        setColor(red);
        printf("\n\t\t\t< Delete failed!!!Entered Book Name doesn't exist in the list >");
        printf("\n\t\t\t Enter any key to continue......");
        getch();
        system("cls");

        return;
    }
    else if (choice == 3)//search by author and delete that profile
    {
        system("cls");
        setColor(light_yellow);
        printf("\n\t\t\t Enter Author :");
        gets(input);
        // scanf("%s", &input);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h, j;
            // h = strcmp(input, b[i].author);
            if (strstr(b[i].author, input))
            {
                for (j = i; j < capacity.count; j++)
                {
                    b[j] = b[j + 1];
                }
                capacity.count--;
                setColor(green);
                printf("\n\t\t\t< Deleting Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        setColor(red);
        printf("\n\t\t\t< Delete failed!!!Entered Author doesn't exist in the list >");
        printf("\n\t\t\t Enter any key to continue......");
        getch();
        system("cls");

        return;
    }
    else
    {
        system("cls");
        // break;
        return;
    }
}


void save()
{
    int choice;
    system("cls");
    printf("\n\t\t\t********Save File Menu***********");

    system("cls");
    choice = printSaveMenu();
    choice = choice + 1;
    if (choice == 1)
    {
        system("cls");
        printf("\n\t\t\t Enter File name to save as (Example-book.txt): ");
        char s[100];
        scanf("%s", s);
        printf("\n\t\t\t< Saved Successfully in New File : %s >", s);
        saveinfo(s, capacity.count);
        printf("\n\t\t\t Enter any key to continue....");
        getch();
        system("cls");
    }
    else if (choice == 2)
    {
        system("cls");
        printf("\n\t\t\t< Saved Successfully in Default File(book.txt) >");
        saveinfo("book.txt", capacity.count);
        printf("\n\t\t\t Enter any key to continue....");
        getch();
        system("cls");
    }
    else
    {
        system("cls");
        return;
    }
}

void setCord(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
