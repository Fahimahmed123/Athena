#include "ui.h"
#include "book_code.h"
#include "io.h"
#include "signin.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>




void setCursorPosition(int x, int y)
{
    COORD coordinate = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}


void heading()
{
    // system("cls");

    printf("\n\n\t\t\t*********LIBRARY MANAGEMENT*********\n");


}

/*
void welcome()
{
    system("cls");

    setColor(cyan);
    printf("\t\t\t\t$$\\      $$\\ $$$$$$$$\\ $$\\       $$$$$$\\   $$$$$$\\  $$\\      $$\\ $$$$$$$$\\ \n"
           "\t\t\t\t$$ | $\\  $$ |$$  _____|$$ |     $$  __$$\\ $$  __$$\\ $$$\\    $$$ |$$  _____|\n"
           "\t\t\t\t$$ |$$$\\ $$ |$$ |      $$ |     $$ /  \\__|$$ /  $$ |$$$$\\  $$$$ |$$ |      \n"
           "\t\t\t\t$$ $$ $$\\$$ |$$$$$\\    $$ |     $$ |      $$ |  $$ |$$\\$$\\$$ $$ |$$$$$\\    \n"
           "\t\t\t\t$$$$  _$$$$ |$$  __|   $$ |     $$ |      $$ |  $$ |$$ \\$$$  $$ |$$  __|   \n"
           "\t\t\t\t$$$  / \\$$$ |$$ |      $$ |     $$ |  $$\\ $$ |  $$ |$$ |\\$  /$$ |$$ |      \n"
           "\t\t\t\t$$  /   \\$$ |$$$$$$$$\\ $$$$$$$$\\\\$$$$$$  | $$$$$$  |$$ | \\_/ $$ |$$$$$$$$\\ \n"
           "\t\t\t\t\\__/     \\__|\\________|\\________|\\______/  \\______/ \\__|     \\__|\\________|\n"
           "                                                                           ");
    printf("\n\n\t\t\t\t\t\t\t\t");
    printf("$$$$$$$$\\  $$$$$$\\  \n"
           "\t\t\t\t\t\t\t\t\\__$$  __|$$  __$$\\ \n"
           "\t\t\t\t\t\t\t\t  $$ |   $$ /  $$ |\n"
           "\t\t\t\t\t\t\t\t  $$ |   $$ |  $$ |\n"
           "\t\t\t\t\t\t\t\t  $$ |   $$ |  $$ |\n"
           " \t\t\t\t\t\t\t\t  $$ |   $$ |  $$ |\n"
           " \t\t\t\t\t\t\t\t  $$ |    $$$$$$  |\n"
           "\t\t\t\t\t\t\t\t  \\__|    \\______/ \n"
           "                    ");

    printf("\n\t\t\t\t\t\t\t\t\t");
    printf(" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\$$$$$$\\ $$$$$$$$\\ $$\\   $$\\ $$$$$$$$\\ $$\\   $$\\  $$$$$$\\  \n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$  __$$\\\\__$$  __|$$ |  $$ |$$  _____|$$$\\  $$ |$$  __$$\\ \n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$ /  $$ |  $$ |   $$ |  $$ |$$ |      $$$$\\ $$ |$$ /  $$ |\n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$$$$$$$ |  $$ |   $$$$$$$$ |$$$$$\\    $$ $$\\$$ |$$$$$$$$ |\n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$  __$$ |  $$ |   $$  __$$ |$$  __|   $$ \\$$$$ |$$  __$$ |\n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$ |  $$ |  $$ |   $$ |  $$ |$$ |      $$ |\\$$$ |$$ |  $$ |\n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$ |  $$ |  $$ |   $$ |  $$ |$$$$$$$$\\ $$ | \\$$ |$$ |  $$ |\n"
           "\t\t\t\t\t\t\t\t\t\t\t\t\\__|  \\__|  \\__|   \\__|  \\__|\\________|\\__|  \\__|\\__|  \\__|\n"
           "                                                           \n"
          );
    setColor(red);
    printf("\n\n\n\t\t\t Enter any key to continue.....\n");
    getch();
}
*/

void welcome()
{
    system("cls");

    setColor(cyan);
    printf("\t\t\t\t\\      \\ $$$$$$$$\\ $\\       $$$$$$\\   $$$$$$\\  \\      \\ $$$$$$$$\\ \n"
           "\t\t\t\t| $\\  $\\ |$$  _____|$$ |     $$  __$$\\ $$  __$$\\ $$$\\    $$$ |$$  _____|\n"
           "\t\t\t\t| $$$\\ $$ |$$ |      $$ |     $$ /  \\__|$$ /  $$ |$$$$\\  $$$$ |$$ |      \n"
           "\t\t\t\t| $$ $$\\$$ |$$$$$\\    $$ |     $$ |      $$ |  $$ |$$\\$$\\$$ $$ |$$$$$\\    \n"
           "\t\t\t\t|$$$  _$$$$ |$$  __|   $$ |     $$ |      $$ |  $$ |$$ \\$$$  $$ |$$  __|   \n"
           "\t\t\t\t|$$$  / \\$$$ |$$ |      $$ |     $$ |  $$\\ $$ |  $$ |$$ |\\$  /$$ |$$ |      \n"
           "\t\t\t\t|$$  /   \\$$ |$$$$$$$$\\ $$$$$$$$\\\\$$$$$$  | $$$$$$  |$$ | \\_/ $$ |$$$$$$$$\\ \n"
           "\t\t\t\t\\__/     \\__|\\________|\\________|\\______/  \\______/ \\__|     \\__|\\________|\n"
           "                                                                           ");
    printf("\n\n\t\t\t\t\t\t\t\t");
    printf("$$$$$$$$\\  $$$$$$\\  \n"
           "\t\t\t\t\t\t\t\t\\__$$  __|$$  __$$\\ \n"
           "\t\t\t\t\t\t\t\t  $$ |   $$ /  $$ |\n"
           "\t\t\t\t\t\t\t\t  $$ |   $$ |  $$ |\n"
           "\t\t\t\t\t\t\t\t  $$ |   $$ |  $$ |\n"
           " \t\t\t\t\t\t\t\t  $$ |   $$ |  $$ |\n"
           " \t\t\t\t\t\t\t\t  $$ |    $$$$$$  |\n"
           "\t\t\t\t\t\t\t\t  \\__|    \\______/ \n"
           "                    ");

    printf("\n\t\t\t\t\t\t\t\t\t");
    printf(" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\\$$$$$$\\ $$$$$$$$\\ $$\\   $$\\ $$$$$$$$\\ $$\\   $$\\  $$$$$$\\  \n"
           "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t$$  __$$\\\\__$$  __|$$ |  $$ |$$  _____|$$$\\  $$ |$$  __$$\\ \n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$ /  $$ |  $$ |   $$ |  $$ |$$ |      $$$$\\ $$ |$$ /  $$ |\n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$$$$$$$ |  $$ |   $$$$$$$$ |$$$$$\\    $$ $$\\$$ |$$$$$$$$ |\n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$  __$$ |  $$ |   $$  __$$ |$$  __|   $$ \\$$$$ |$$  __$$ |\n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$ |  $$ |  $$ |   $$ |  $$ |$$ |      $$ |\\$$$ |$$ |  $$ |\n"
           "\t\t\t\t\t\t\t\t\t\t\t\t$$ |  $$ |  $$ |   $$ |  $$ |$$$$$$$$\\ $$ | \\$$ |$$ |  $$ |\n"
           "\t\t\t\t\t\t\t\t\t\t\t\t\\__|  \\__|  \\__|   \\__|  \\__|\\________|\\__|  \\__|\\__|  \\__|\n"
           "                                                           \n"
          );
    setColor(red);
    printf("\n\n\n\t\t\t Enter any key to continue.....\n");
    getch();
}


//this function manages the Main Menu
void mainMenu()
{
    int n = 1;
    int amount;
    amount = capacity.count;
    //
    int count = 0;
    int relen = 0;
    capacity.count = 0;
    while (n)
    {

        n = printMenu();
        n = n + 1;
        if (n == 1)
        {
            system("cls");
            setColor(light_yellow);
            printf("\n\t\t\t Enter Number of books :");
            scanf("%d", &relen);

            int j, s;
            s = 1;
            amount = capacity.count;
            fflush(stdin);
            setColor(cyan);
            printf("\n\t\t\t*********Add Book************");//Add book menu
            int c = 0;

            for (j = capacity.count; j < (amount + relen); j++)
            {
                s = 1;
                int l;
                while (s)//It compares ISBN uniquely
                {
                    char in[100];
                    system("cls");
                    printf("\n\t\t\t Enter ISBN :");
                    fgets(in, 15, stdin);
                    int g = strlen(in);
                    int f;
                    f = check(in);//It compares with other ISBN ids
                    if (g == 14 && f == 0)
                    {
                        strcpy(b[j].id, in);
                        printf("\n\t\t\t Enter Book Name :");

                        fgets(b[j].name, 100, stdin);

                        printf("\n\t\t\t Enter Author Name :");
                        fgets(b[j].author, 100, stdin);
                        printf("\n\t\t\t Enter Genre :");
                        fgets(b[j].genre, 100, stdin);
                        printf("\n\t\t\t Enter Number of quantity :");
                        scanf("%d", &b[j].quantity);
                        printf("\n\t\t\t Enter Shelf Number :");
                        scanf("%d", &b[j].shelf);
                        printf("\n\t\t\t Book adding success!!!");
                        printf("\n\t\t\t Enter any key to continue....");
                        capacity.count++;
                        system("cls");
                        s = 0;
                    }
                    else if (f == 0 && g != 14) //when ISBN isn't upto length and if its not unique
                    {
                        printf("\n\t\t\tYou entered wrong ID");
                    }
                    else if (f == 1&&g==14)//when ISBN ID exists
                    {
                        system("cls");
                        printf("\n\t\t\t< Your entered ISBN exists already >");
                        c = printCheckMenu();
                        c = c + 1;
                        if (c == 1)
                        {
                            system("cls");
                            int z;
                            for (z = 0; z < capacity.count + relen; z++)
                            {
                                if (strstr(b[z].id, in) != NULL)
                                {
                                    b[z].quantity = b[z].quantity + 1;
                                    s = 0;
                                    printf("\n\t\t\t Quantity Adding Success!!! ");//rises the quantity
                                    printf("\n\t\t\t Enter any key to continue......");
                                    getch();
                                    system("cls");
                                    break;
                                }
                            }
                        }
                        else
                        {
                            system("cls");
                        }
                    }
                }
            }
        }
        else if (n == 2)
        {
            setColor(cyan);
            viewBook();
        }
        else if (n == 3)
        {
            setColor(light_yellow);
            printf("\n\t\t\t######### Welcome to Search Menu #########");
            setColor(cyan);
            search();
        }
        else if (n == 4)
        {

            setColor(light_yellow);
            printf("\n\t\t\t######### Welcome to Edit Menu #########");

            setColor(cyan);
            edit();
        }
        else if (n == 5)
        {
            // heading();
            setColor(red);
            delete ();
        }
        else if (n == 6)
        {
            // heading();
            save();
        }
        else if (n == 7)
        {
            int size, i;
            int choice;
            setColor(blue);
            heading();
            system("cls");
            setColor(light_yellow);
            printf("\n\t\t\t********Load File Menu***********");

            choice = printLoadMenu();
            choice = choice + 1;
            if (choice == 1)//this loads the file from user defined file name
            {
                system("cls");
                setColor(green);
                printf("\n\t\t\t Enter File name to Load from (Example-book.txt): ");
                char s[100];
                scanf(" %[^\n]", s);
                size = load(s);
                capacity.count = size;
                setColor(cyan);
                printf("\n\n\t\t<<<<<< Total count : %d >>>>>>", size);
                for (i = 0; i < size; i++)
                {
                    printf("\n\t\t\t ISBN     : %s   ", b[i].id);
                    printf("\n\t\t\t Name     : %s   ", b[i].name);
                    printf("\n\t\t\t Author   : %s   ", b[i].author);
                    printf("\n\t\t\t Genre    : %s   ", b[i].genre);
                    printf("\n\t\t\t Quantity : %d   ", b[i].quantity);
                    printf("\n\n\t\t\t Shelf    : %d   \n", b[i].shelf);
                }
                setColor(green);
                printf("\n\t\t\t< Loaded Successfully From Entered File : %s >", s);
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
            }
            else if (choice == 2)//loads from default file
            {
                system("cls");
                size = load("book.txt");
                capacity.count = size;
                setColor(cyan);
                printf("\n\n\t\t<<<<<< Total count : %d >>>>>>", size);
                for (i = 0; i < size; i++)
                {
                    printf("\n\t\t\t ISBN     : %s   ", b[i].id);
                    printf("\n\t\t\t Name     : %s   ", b[i].name);
                    printf("\n\t\t\t Author   : %s   ", b[i].author);
                    printf("\n\t\t\t Genre    : %s   ", b[i].genre);
                    printf("\n\t\t\t Quantity : %d   ", b[i].quantity);
                    printf("\n\t\t\t Shelf      : %d   \n\n", b[i].shelf);
                }
                setColor(green);
                printf("\n\t\t\t< Loaded Successfully from Default File(book.txt) >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
            }
            else
            {
                system("cls");
            }
        }
        else if (n == 8)
        {
            setColor(red);
            borrow();
        }
        else if (n == 10)
        {
            system("clr");
            setColor(green);
            returnbook();
        }
        else if (n == 9)
        {
            setColor(green);
            help();
        }

        else
        {
            // exit() ;
            // heading();
            system("cls");
            setColor(cyan);
            printf("\n\t\t\t>>>>>> Have a Nice Day! <<<<<<<");
            getch();
            break;
        }

    }
}

//this helps to edit book profile using different criteria
void edit()
{
    int choice, in;
    char input[100], change[100];
    system("cls");

    choice = printEditMenu();
    choice = choice + 1;
    fflush(stdin);
    if (choice == 1)//edit the ISBN
    {
        system("cls");
        printf("\n\t\t\t Enter ISBN  :");
        fgets(input, 100, stdin);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h;
            // h = strcmp(input, b[i].id);
            if (strstr(b[i].id, input) != NULL)
            {
                while (1)
                {
                    printf("\n\t\t\t Enter New ISBN  :");
                    fgets(change, 100, stdin);
                    strcpy(b[i].id, change);
                    int g = strlen(change);
                    if (g == 13)
                        break;
                    else
                        printf("\n\n\t\t You entered wrong ISBN");
                }
                printf("\n\t\t\t< Editing Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        printf("\n\n\t\t < Edit failed!!!Entered ISBN is invalid. >");
        printf("\n\n\t\t Enter any key to continue.....");
        getch();
        system("cls");
        return;
    }
    else if (choice == 2)//Edit the book name
    {
        char ch;
        system("cls");
        printf("\n\t\t\t Enter Book Name :");
        fgets(input, 100, stdin);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h;
            // h = strcmp(input, b[i].name);
            if (strstr(b[i].name, input) != NULL)
            {
                printf("\n\t\t\t Enter New Book Name :");
                fgets(change, 100, stdin);
                strcpy(b[i].name, change);
                printf("\n\t\t\t< Editing Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        printf("\n\n\t\t < Edit failed!!!Entered book name doesn't exist in the list >");
        printf("\n\n\t\t Enter any key to continue.....");
        getch();
        system("cls");
        return;
    }
    else if (choice == 3)//Edit author
    {
        //getchar();
        system("cls");
        printf("\n\t\t\t Enter Author :");
        fgets(input, 100, stdin);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h;
            // h = strcmp(input, b[i].author);
            if (strstr(b[i].author, input) != NULL)
            {
                printf("\n\t\t\t Enter New Author :");
                fgets(change, 100, stdin);
                strcpy(b[i].author, change);
                printf("\n\t\t\t< Editing Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        printf("\n\n\t\t < Edit failed!!!Entered Author doesn't exist in the list >");
        printf("\n\n\t\t Enter any key to continue.....");
        getch();
        system("cls");
        return;
    }
    else if(choice==4)
    {
        //getchar();
        system("cls");
        printf("\n\t\t\t Enter Genre :");
        fgets(input, 100, stdin);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h;
            // h = strcmp(input, b[i].author);
            if (strstr(b[i].genre, input) != NULL)
            {
                printf("\n\t\t\t Enter New Genre :");
                fgets(b[i].genre, 100, stdin);
                // strcpy(b[i].genre, change);
                printf("\n\t\t\t< Editing Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        printf("\n\n\t\t < Edit failed!!!Entered genre doesn't exist in the list >");
        printf("\n\n\t\t Enter any key to continue.....");
        getch();
        system("cls");
        return;
    }
    else if (choice == 5)
    {
        // getchar();
        system("cls");
        printf("\n\t\t\t Enter ISBN  :");
        fgets(input, 100, stdin);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h;
            // h = strcmp(input, b[i].name);
            if (strstr(b[i].id, input) != NULL)
            {
                printf("\n\t\t\t Enter New Quantity :");
                scanf("%d", &in);
                b[i].quantity = in;
                printf("\n\t\t\t< Editing Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        printf("\n\n\t\t < Edit failed!!!Entered book doesn't exist in the list >");
        printf("\n\n\t\t Enter any key to continue.....");
        getch();
        system("cls");
        return;
    }
    else if (choice == 6)
    {
        // getchar();
        system("cls");
        printf("\n\t\t\t Enter ISBN  :");
        fgets(input, 100, stdin);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h;
            // h = strcmp(input, b[i].name);
            if (strstr(b[i].id, input) != NULL)
            {
                printf("\n\t\t\t Enter New Shelf :");
                scanf("%d", &in);
                b[i].shelf = in;
                printf("\n\t\t\t< Editing Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        printf("\n\n\t\t < Edit failed!!!Entered book doesn't exist in the list >");
        printf("\n\n\t\t Enter any key to continue.....");
        getch();
        system("cls");
        return;
    }

    else
    {
        system("cls");
        return;
    }
}




void borrow()
{
    int choice, in;
    char input[100], change[100];
    system("cls");
    printf("\n\t\t\t$$$$$$$$$ Welcome to Borrow Menu $$$$$$$$$");

    choice = printBorrowMenu();
    choice = choice + 1;
    system("cls");
    fflush(stdin);
    if (choice == 1)
    {
        system("cls");
        printf("\n\t\t\t Enter ISBN  :");
        scanf("%s", &input);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h, j;

            if (strstr(b[i].id, input) != NULL)
            {
                if (b[i].quantity > 0)
                {
                    b[i].quantity = b[i].quantity - 1;
                    printf("\n\t\t\t< Borrow Success!!! >");
                    printf("\n\t\t\t Enter any key to continue....");
                    getch();
                    system("cls");
                    return;
                }
                else
                {
                    printf("\n\t\t\t< Sorry the book is out of stock!!! >");
                    printf("\n\t\t\t Enter any key to continue....");
                    getch();
                    system("cls");
                    return;
                }
            }
        }
        printf("\n\t\t\t< Borrow failed!!!Entered ISBN doesn't exist in the list >");
        printf("\n\t\t\t Enter any key to continue......");
        getch();
        system("cls");
        return;
    }
    else if (choice == 2)
    {
        system("cls");
        printf("\n\t\t\t Enter Book Name :");
        fgets(input, 100, stdin);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h, j;
            if (strstr(b[i].name, input) != NULL)
            {
                if (b[i].quantity > 0)
                {
                    b[i].quantity = b[i].quantity - 1;
                    printf("\n\t\t\t< Borrow Success!!! >");
                    printf("\n\t\t\t Enter any key to continue....");
                    getch();
                    system("cls");
                    return;
                }
                else
                {
                    printf("\n\t\t\t< Sorry the book is out of stock!!! >");
                    printf("\n\t\t\t Enter any key to continue....");
                    getch();
                    system("cls");
                    return;
                }
            }
        }
        printf("\n\t\t\t< Borrow failed!!!Entered Book Name doesn't exist in the list >");
        printf("\n\t\t\t Enter any key to continue......");
        getch();
        system("cls");
        return;
    }
    else
    {
        system("cls");
        return;
    }
}

void returnbook()
{
    int choice, in;
    char input[100], change[100];
    system("cls");
    setColor(light_yellow);
    printf("\n\t\t\t$$$$$$$$$ Welcome to Return Menu $$$$$$$$$");

    choice = printReturnMenu();
    choice = choice + 1;
    system("cls");
    fflush(stdin);
    if (choice == 1)
    {
        system("cls");
        setColor(cyan);
        printf("\n\t\t\t Enter ISBN  :");
        scanf("%s", &input);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h, j;
            // h = strcmp(input, b[i].id);
            if (strstr(b[i].id, input) != NULL)
            {

                b[i].quantity = b[i].quantity + 1;
                setColor(green);
                printf("\n\t\t\t< Return Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        setColor(red);
        printf("\n\t\t\t < Return Failed!!!Entered ISBN doesn't exist in list ");
        printf("\n\t\t\t Enter any key to continue......");
        getch();
        system("cls");
        return;
    }
    else if (choice == 2)
    {
        system("cls");
        printf("\n\t\t\t Enter Book Name :");
        fgets(input, 100, stdin);
        // scanf("%s", &input);
        int i;
        for (i = 0; i < capacity.count; i++)
        {
            int h, j;
            // h = strcmp(input, b[i].name);
            if (strstr(b[i].name, input) != NULL)
            {

                b[i].quantity = b[i].quantity + 1;
                printf("\n\t\t\t< Return Success!!! >");
                printf("\n\t\t\t Enter any key to continue....");
                getch();
                system("cls");
                return;
            }
        }
        printf("\n\t\t\t< Return failed!!!Entered book name doesn't exist in the list >");
        printf("\n\t\t\t Enter any key to continue......");
        getch();
        system("cls");
        return;
    }
    else
    {
        system("cls");
        return;
    }
}



void help()
{
    setColor(blue);

    printf("\n\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Guidelines >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    printf("\n\t\t********************************************************************************************");
    printf("\n\t\t*  -> Make sure the file you want to load is as per allignment provided by the system.     *");
    printf("\n\t\t*  -> Remember your Username and Password to get access to the system                      *");
    printf("\n\t\t*  -> Make sure you Follow the instructions of Menu on your screen.                        *");
    printf("\n\t\t*  -> User can use special symbol like [ _ . , * # @ ! ~ \\ / ]                            *");
    printf("\n\t\t*  -> Please be careful while naming the File.Avoid spaces while naming a file.            *");
    printf("\n\t\t********************************************************************************************");
    printf("\n\t\t\t\t< Thank you for choosing us.   Wish you a nice day >");
    printf("\n\n\t\t\t\t< Enter any key to continue...... >");
    getch();
    system("cls");
}


void print_center(int row, char *s)
{
    COORD c;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    c.X = row;
    c.Y = (columns - strlen(s)) / 2;
    ;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("%s", s);
}


int printMenu()
{
    char menu[][20] = {"Add Book", "Book List ", "Search a Book", "Edit Book", "Delete Book ",
                       "Save File", "Load from File", "Borrow", "Guideline", "Return", "Exit"
                      };
    int selected = 0;
    // system("cls");
    system("COLOR 11");
    setColor(green);
    setCursorPosition(41, 5);
    printf(">>> %s <<<", menu[0]);
    setColor(gray);
    for (int i = 1; i < 11; i++)
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
            selected = (selected + 10) % 11; // n-1 % n
        else if (ch == 80)
            selected = (selected + 1) % 11; //=1 ek hbe bt 10=n hbe

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
            setColor(green);
        else if (selected == 6)
            setColor(blue);
        else if (selected == 7)
            setColor(light_yellow);
        else if (selected == 8)
            setColor(cyan);
        else if (selected == 9)
            setColor(blue);
        else if (selected == 10)
            setColor(green);

        setCursorPosition(41, 5 + selected);
        printf(">>> %s <<<", menu[selected]); // xyz[i]
    }
}


int printSignin()
{
    char menu[][20] =
    {
        "SignIn",
        "Register",
    };
    system("COLOR 11");
    int selected = 0;
    // system("cls");
    setColor(green);
    setCursorPosition(41, 5);
    printf(">>> %s <<<", menu[0]);
    setColor(gray);
    for (int i = 1; i < 2; i++)
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
            selected = (selected + 1) % 2; // n-1 % n
        else if (ch == 80)
            selected = (selected + 1) % 2; //=1 ek hbe bt 10=n hbe

        else if (ch == 13)
            return selected;

        if (selected == 0)
            setColor(green);
        else if (selected == 1)
            setColor(blue);
        else if (selected == 2)
            setColor(light_yellow); //

        setCursorPosition(41, 5 + selected);
        printf(">>> %s <<<", menu[selected]); // xyz[i]
    }
}








int printEditMenu()
{
    char menu[][200] = {"Edit ISBN", "Edit Bookname", "Edit Author","Edit Genre", "Edit Quantity", "Edit Shelf", "Back"};
    int selected = 0;
    // system("cls");
    system("COLOR 11");
    setColor(green);
    setCursorPosition(41, 5);
    printf(">>> %s <<<", menu[0]);
    setColor(gray);
    for (int i = 1; i < 7; i++)
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
            selected = (selected + 6) % 7; // n-1 % n
        else if (ch == 80)
            selected = (selected + 1) % 7; //=1 ek hbe bt 10=n hbe

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
            setColor(purple);
        else if (selected == 5)
            setColor(light_yellow);
        else if (selected == 6)
            setColor(green);
        else if (selected == 7)
            setColor(red);

        setCursorPosition(41, 5 + selected);
        printf(">>> %s <<<", menu[selected]); // xyz[i]
    }
}



int printLoadMenu()
{
    char menu[][200] = {"New File", "Default File", "Back"};
    int selected = 0;
    // system("cls");
    system("COLOR 11");
    setColor(green);
    setCursorPosition(41, 5);
    printf(">>> %s <<<", menu[0]);
    setColor(gray);
    for (int i = 1; i < 3; i++)
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
            selected = (selected + 2) % 3; // n-1 % n
        else if (ch == 80)
            selected = (selected + 1) % 3; //=1 ek hbe bt 10=n hbe

        else if (ch == 13)
            return selected;

        if (selected == 0)
            setColor(green);
        else if (selected == 1)
            setColor(blue);
        else if (selected == 2)
            setColor(light_yellow); //
        else if (selected == 3)
            setColor(red);
        setCursorPosition(41, 5 + selected);
        printf(">>> %s <<<", menu[selected]); // xyz[i]
    }
}


int printBorrowMenu()
{
    char menu[][200] = {"ISBN", "Book Name", "Back"};
    int selected = 0;
    // system("cls");
    system("COLOR 11");
    setColor(green);
    setCursorPosition(41, 5);
    printf(">>> %s <<<", menu[0]);
    setColor(gray);
    for (int i = 1; i < 3; i++)
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
            selected = (selected + 2) % 3; // n-1 % n
        else if (ch == 80)
            selected = (selected + 1) % 3; //=1 ek hbe bt 10=n hbe

        else if (ch == 13)
            return selected;

        if (selected == 0)
            setColor(green);
        else if (selected == 1)
            setColor(blue);
        else if (selected == 2)
            setColor(light_yellow); //
        else if (selected == 3)
            setColor(red);
        setCursorPosition(41, 5 + selected);
        printf(">>> %s <<<", menu[selected]); // xyz[i]
    }
}




int printReturnMenu()
{
    char menu[][200] = {"ISBN", "Book Name", "Back"};
    int selected = 0;
    // system("cls");
    system("COLOR 11");
    setColor(green);
    setCursorPosition(41, 5);
    printf(">>> %s <<<", menu[0]);
    setColor(gray);
    for (int i = 1; i < 3; i++)
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
            selected = (selected + 2) % 3; // n-1 % n
        else if (ch == 80)
            selected = (selected + 1) % 3; //=1 ek hbe bt 10=n hbe

        else if (ch == 13)
            return selected;

        if (selected == 0)
            setColor(green);
        else if (selected == 1)
            setColor(blue);
        else if (selected == 2)
            setColor(light_yellow); //
        else if (selected == 3)
            setColor(red);
        setCursorPosition(41, 5 + selected);
        printf(">>> %s <<<", menu[selected]); // xyz[i]
    }
}



int check(char *in)
{
    int i;
    for (i = 0; i < capacity.count; i++)
    {
        // j = strcmp(bookname, b[i].name);
        if (strstr(b[i].id, in) != NULL)
        {
            return 1;
        }
    }
    return 0;
}



int printCheckMenu()
{
    char menu[][200] = {"Do you want to Increase quantity?", "Do you want to Try again?"};
    int selected = 0;
    // system("cls");
    system("COLOR 11");
    setColor(green);
    setCursorPosition(41, 5);
    printf(">>> %s <<<", menu[0]);
    setColor(gray);
    for (int i = 1; i < 2; i++)
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
            selected = (selected + 1) % 2; // n-1 % n
        else if (ch == 80)
            selected = (selected + 1) % 2; //=1 ek hbe bt 10=n hbe

        else if (ch == 13)
            return selected;

        if (selected == 0)
            setColor(green);
        else if (selected == 1)
            setColor(green);
        else if (selected == 2)
            setColor(red); //

        setCursorPosition(41, 5 + selected);
        printf(">>> %s <<<", menu[selected]); // xyz[i]
    }
}





int printSaveMenu()
{
    char menu[][200] = {"New File", "Default File", "Back"};
    int selected = 0;
    // system("cls");
    system("COLOR 11");
    setColor(green);
    setCursorPosition(41, 5);
    printf(">>> %s <<<", menu[0]);
    setColor(gray);
    for (int i = 1; i < 3; i++)
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
            selected = (selected + 2) % 3; // n-1 % n
        else if (ch == 80)
            selected = (selected + 1) % 3; //=1 ek hbe bt 10=n hbe

        else if (ch == 13)
            return selected;

        if (selected == 0)
            setColor(green);
        else if (selected == 1)
            setColor(blue);
        else if (selected == 2)
            setColor(light_yellow); //
        else if (selected == 3)
            setColor(red);
        setCursorPosition(41, 5 + selected);
        printf(">>> %s <<<", menu[selected]); // xyz[i]
    }
}


int printDeleteMenu()
{
    char menu[][200] = {"ISBN", "Bookname", "Author", "Back"};
    int selected = 0;
    // system("cls");
    system("COLOR 11");
    setColor(green);
    setCursorPosition(41, 5);
    printf(">>> %s <<<", menu[0]);
    setColor(gray);
    for (int i = 1; i < 4; i++)
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
            selected = (selected + 3) % 4; // n-1 % n
        else if (ch == 80)
            selected = (selected + 1) % 4; //=1 ek hbe bt 10=n hbe

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
        setCursorPosition(41, 5 + selected);
        printf(">>> %s <<<", menu[selected]); // xyz[i]
    }
}



