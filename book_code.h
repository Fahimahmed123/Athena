#ifndef BOOK_CODE_H_INCLUDED
#define BOOK_CODE_H_INCLUDED


typedef struct Book_info  //book profile
{
    char id[15];
    char name[100];
    char author[100];
    char genre[100];
    int quantity;
    int shelf;

} book;


extern book b[1000] ;

enum Color
{
    black,
    gray = 8,
    blue,
    green,
    cyan,
    red,
    purple,
    light_yellow,
    white
};

typedef struct _Book_Count9 //keeping count of books and users from file system and in the structure
{
    int count;      // Count of books(different types) in library
    int users;      // Count of registered users of the system
} number;

extern number capacity;

void viewBook();
int loadinfo(char *filepath, int n);
int saveinfo(char *filepath, int n);
int search();
int printSearchMenu();



#endif // BOOK_CODE_H_INCLUDED
