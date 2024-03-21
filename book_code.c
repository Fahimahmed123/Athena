#include "book_code.h"
#include "io.h"
#include "ui.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <time.h>




book b[1000] = {0};
number capacity;

//this helps to print the currently loaded book list
void viewBook()
{

    // int i = count;
    system("cls");
    setColor(light_yellow);
    printf("\n\n\t\t ********* View Book *********\n\n");
    setColor(cyan);
    int j, i;
    int c;
    // c = count;
    for (i = 0; i < capacity.count; i++)
    {
        printf("\n\t\t\t ISBN     : %s   ", b[i].id);
        printf("\n\t\t\t Name     : %s   ", b[i].name);
        printf("\n\t\t\t Author   : %s   ", b[i].author);
        printf("\n\t\t\t Genre    : %s   ", b[i].genre);
        printf("\n\t\t\t Quantity : %d   ", b[i].quantity);
        printf("\n\n\t\t\t Shelf    : %d   \n", b[i].shelf);
    }
    setColor(blue);
    printf("\n\n\t\t<<<<<< Total count :%d >>>>>>", capacity.count);
    printf("\n\t\t\t Enter any key to continue....");
    getch();
    system("cls");
}

int loadinfo(char *filepath, int n) // deserialization
{

    FILE *fp = fopen(filepath, "r+");
    int i, len;
    if (!fp)
        exit(1);
    fscanf(fp, "\n\t\t\t********* Total Books  : %d *********", &len);
    fgetc(fp);
    for (i = 0; i < n; i++)
    {


        fgets(b[i].id, 15, fp);
        fgets(b[i].name, 100, fp);
        fgets(b[i].author, 100, fp);
        fgets(b[i].genre, 100, fp);
        fscanf(fp, "%d", &b[i].quantity);
        fscanf(fp, "%d\n", &b[i].shelf);

    }
    // free(b);
    fclose(fp);
    return 0;
}

int saveinfo(char *filepath, int n) // serialization
{
    FILE *fp = fopen(filepath, "w+");
    if (fp==NULL)
        exit(1);
    int i;
    fprintf(fp, "\n\t\t\t********* Total Books  : %d *********\n", capacity.count);
    for (i = 0; i < n; i++)
    {

        b[i].id[strlen(b[i].id) - 1] = '\0';
        b[i].name[strlen(b[i].name) - 1] = '\0';
        b[i].author[strlen(b[i].author) - 1] = '\0';
        b[i].genre[strlen(b[i].genre) - 1] = '\0';
        fprintf(fp, "%s\n", b[i].id);
        fprintf(fp, "%s\n", b[i].name);
        fprintf(fp, "%s\n", b[i].author);
        fprintf(fp, "%s\n", b[i].genre);
        fprintf(fp, "%d\n", b[i].quantity);
        fprintf(fp, "%d\n\n", b[i].shelf);
    }

    fclose(fp);
    // encrypt(filepath,"Excallibur");

    return 0;
}

//this helps to search through different criteria
int search()
{
    char bookname[100];
    char id[100];
    int choice;

    system("cls");
    // printf("\n\t\t\t Enter choice to proceed :");
    // scanf("%d", &choice);
    choice = printSearchMenu();
    choice = choice + 1;
    system("cls");
    if (choice == 1)//search by Book name
    {
        setColor(cyan);
        system("cls");
        int count = 0;
        printf("\n\t\t\t Enter Bookname :");
        scanf(" %[^\n]", bookname);
        int i, j;
        for (i = 0; i < capacity.count; i++)
        {
            // j = strcmp(bookname, b[i].name);
            if (strstr(b[i].name, bookname) != NULL)
            {
                printf("\n\t\t\t<      Book Found!!!         >");
                printf("\n\t\t\t< Your desired book's details >");
                printf("\n\t\t\t*************************");
                printf("\n\t\t\t ISBN     : %s   ", b[i].id);
                printf("\n\t\t\t Name     : %s   ", b[i].name);
                printf("\n\t\t\t Author   : %s   ", b[i].author);
                printf("\n\t\t\t Genre    : %s   ", b[i].genre);
                printf("\n\t\t\t Quantity : %d   ", b[i].quantity);
                printf("\n\n\t\t\t Shelf    : %d   ", b[i].shelf);
                printf("\n\t\t\t*************************");
                count++;
                // return 0;
            }
        }
        if (count == 0)
        {
            system("cls");
            setColor(red);
            printf("\n\t\t\t< Book Not Found!!! >");
        }
        printf("\n\t\t\t Enter any key to continue....");
        getch();
        system("cls");
        return 0;
    }
    else if (choice == 2)//search by ISBN
    {
        system("cls");
        int count = 0;
        setColor(cyan);
        printf("\n\t\t\t Enter ISBN :");
        scanf(" %[^\n]", id);
        int i, j;
        for (i = 0; i < capacity.count; i++)
        {
            // j = strcmp(id, b[i].id);
            if (strstr(b[i].id, id) != NULL)
            {
                setColor(cyan);
                printf("\n\t\t\t<------- Book Found!!! ------->");
                printf("\n\t\t\t< Your desired book's details >");
                printf("\n\t\t\t*************************");
                printf("\n\t\t\t ISBN   : : %s   ", b[i].id);
                printf("\n\t\t\t Name     : %s   ", b[i].name);
                printf("\n\t\t\t Author   : %s   ", b[i].author);
                printf("\n\t\t\t Genre    : %s   ", b[i].genre);
                printf("\n\t\t\t Quantity : %d   ", b[i].quantity);
                printf("\n\n\t\t\t Shelf    : %d   \n", b[i].shelf);
                printf("\n\t\t\t*************************");
                // return 0;
                count++;
            }
        }
        if (count == 0)
        {
            system("cls");
            setColor(red);
            printf("\n\t\t\t< Book Not Found!!! >");
        }
        printf("\n\t\t\t Enter any key to continue....");
        getch();
        system("cls");
        return 0;
    }
    else if (choice == 3)//search by genre
    {
        system("cls");
        int count = 0;
        setColor(light_yellow);
        printf("\n\t\t\t Enter Genre :");
        scanf("%s", &id);
        int i, j;
        for (i = 0; i < capacity.count; i++)
        {
            // j = strcmp(id, b[i].genre);
            if (strstr(b[i].genre, id) != NULL)
            {
                setColor(cyan);
                printf("\n\t\t\t<------- Book Found!!! ------->");
                printf("\n\t\t\t< Your desired book's details >");
                printf("\n\t\t\t*************************");
                printf("\n\t\t\t ISBN     : %s   ", b[i].id);
                printf("\n\t\t\t Name     : %s   ", b[i].name);
                printf("\n\t\t\t Author   : %s   ", b[i].author);
                printf("\n\t\t\t Genre    : %s   ", b[i].genre);
                printf("\n\t\t\t Quantity : %d   ", b[i].quantity);
                printf("\n\n\t\t\t Shelf    : %d   \n", b[i].shelf);
                printf("\n\t\t\t*************************");
                // return 0;
                count++;
            }
        }
        int f;
        f = 0;
        if (count == 0)
        {
            system("cls");
            setColor(red);
            printf("\n\t\t\t< Book Not Found!!! >");
        }
        printf("\n\t\t\t Enter any key to continue....");
        getch();
        system("cls");
        return 0;
    }
    else if (choice == 4)//search by author
    {
        system("cls");
        int count = 0;
        setColor(light_yellow);
        printf("\n\t\t\t Enter Author :");
        scanf("%s", &id);
        int i, j;
        for (i = 0; i < capacity.count; i++)
        {
            // j = strcmp(id, b[i].author);
            if (strstr(b[i].author, id) != NULL)
            {
                setColor(cyan);
                printf("\n\t\t\t<------- Book Found!!! ------->");
                printf("\n\t\t\t< Your desired book's details >");
                printf("\n\t\t\t*************************");
                printf("\n\t\t\t ISBN     : %s   ", b[i].id);
                printf("\n\t\t\t Name     : %s   ", b[i].name);
                printf("\n\t\t\t Author   : %s   ", b[i].author);
                printf("\n\t\t\t Genre    : %s   ", b[i].genre);
                printf("\n\t\t\t Quantity : %d   ", b[i].quantity);
                printf("\n\n\t\t\t Shelf    : %d   \n", b[i].shelf);
                printf("\n\t\t\t*************************");
                // return 0;
                count++;
            }
        }
        int f;
        f = 0;
        if (count == 0)
        {
            system("cls");
            setColor(red);
            printf("\n\t\t\t< Book Not Found!!! >");
        }
        printf("\n\t\t\t Enter any key to continue....");
        getch();
        system("cls");
        return 0;
    }
    else
    {
        system("cls");
        return 0;
    }
}


int printSearchMenu()
{
    char menu[][200] = {"Search by Bookname", "Search by ISBN", "Search by Genre", "Search by Author", "Back"};
    int selected = 0;
    // system("cls");
    system("COLOR 11");
    setColor(green);
    setCursorPosition(41, 5);
    printf(">>> %s <<<", menu[0]);
    setColor(gray);
    for (int i = 1; i < 5; i++)
    {
        setCursorPosition(44, 5 + i);
        printf(" %s ", menu[i]);
    }

    while (1)
    {
        char ch = _getch();

        if (ch == -32)
            ch = _getch();

        setColor(gray);
        setCursorPosition(40, 5 + selected);
        printf("     %s    ", menu[selected]);

        if (ch == 72)
            selected = (selected + 4) % 5; // n-1 % n
        else if (ch == 80)
            selected = (selected + 1) % 5; //=1 ek hbe bt 10=n hbe

        else if (ch == 13)
            return selected;

        if (selected == 0)
            setColor(green);
        else if (selected == 1)
            setColor(blue);
        else if (selected == 2)
            setColor(light_yellow); //
        else if (selected == 3)
            setColor(cyan);
        else if (selected == 4)
            setColor(red);
        else if (selected == 5)
            setColor(red);

        setCursorPosition(41, 5 + selected);
        printf(">>> %s <<<", menu[selected]); // xyz[i]
    }
}





