#ifndef UI_H_INCLUDED
#define UI_H_INCLUDED

void setCursorPosition(int x, int y);

void heading();
void welcome();
void mainMenu();
void edit();
void borrow();
void returnbook();
void help();
void print_center(int row, char *s);
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
int printSaveMenu();
int printDeleteMenu();




#endif // UI_H_INCLUDED
