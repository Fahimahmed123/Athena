#ifndef SIGNIN_H_INCLUDED
#define SIGNIN_H_INCLUDED

typedef struct _signin  //user profile
{
    char username[100];
    char pass[100];
    char phone[20];
    char address[100];
    char id[100];

} signin;

signin sign[500];


int registration();
void saveuserinfo(char *filepath);
int loaduserinfo();
int password(const char *name_input, const char *password_input);



#endif // SIGNIN_H_INCLUDED
