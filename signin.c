#include "signin.h"
#include "book_code.h"
#include<stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>



//this function is used in registration purpose
int registration()
{

    int f;
    f = loaduserinfo();

    f = capacity.users;
    if (f > 500)
    {
        f = 1;
        capacity.users = 1;
        saveuserinfo("user.bin");
    }
    char a[100];
    int g;
    // f=f+1;
    g=1;
    while(g)
    {
        printf("\n\t\t\t Enter Username(use unique username) :");
        scanf(" %[^\n]", &a);
        int gg,count=0;
        for(gg=0; gg<=f; gg++) //checking previous usernames
        {
            int jj;
            jj=strcmp(sign[gg].username,a);
            if(jj==0)
                count++;
        }
        if(count==0)
        {
            strcpy(sign[f].username,a);
            g=0;

        }
        else
        {
            printf("\n\t\t Try new username....");
            g=1;
            printf("\n\t\t Enter any key to continue.....");
            getch();
            system("cls");
        }
    }
    printf("\n\t\t\t Enter Password         :");
    scanf(" %[^\n]", sign[f].pass);

    printf("\n\t\t\t Enter your ID          :");
    scanf(" %[^\n]", sign[f].id);

    printf("\n\t\t\t Enter your address     :");
    scanf(" %[^\n]", sign[f].address);

    printf("\n\t\t\tEnter your Phone number :");
    scanf(" %[^\n]", sign[f].phone);

    printf("\n\n\t\t\t< Registration successful to IUTLIB >\n");
    printf("\n\n\t\t\t ~~~~~~~~~~~ Welcome %s ~~~~~~~~~~~     ", sign[f].username);
    // f++;
    capacity.users++;
    saveuserinfo("user.bin");
    return 1;
}

void saveuserinfo(char *filepath) // serialization
{
    FILE *fp = fopen(filepath, "wb");
    int i;

    if (!fp)
        exit(1);

    fwrite(&(capacity.users),sizeof(capacity.users),1,fp);

    fwrite(&sign,sizeof(signin),capacity.users,fp);


    fclose(fp);

    return;
}

int loaduserinfo()
{

    FILE *fp = fopen("user.bin", "rb");
    int i, len;
    if (!fp)
    {
        printf("\n\t\t\t< ERROR!!! >");
        exit(1);
    }

    fread(&len,sizeof(len),1,fp);
    capacity.users = len;

    if (!fp)
        exit(1);

    fread(&sign,sizeof(signin),capacity.users,fp);


    fclose(fp);

    return len + 1;
}

//this function compares password present in the file
int password(const char *name_input, const char *password_input)
{
    int i, len;
    len = loaduserinfo();
    // printf("%d\n",len);
    capacity.users = len;

    for (i = 0; i < len; i++)
    {
        int a;
        a = strcmp(name_input, sign[i].username);
        if (a == 0)
        {
            int b;
            b = strcmp(password_input, sign[i].pass);
            if (b == 0)
            {
                return i;
            }
            else
                return 1000+i;
        }
    }
    return -1;
}

