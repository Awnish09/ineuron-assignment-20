//function to swap strings of two char arrays of calling functions.

#include<stdio.h>
#include<conio.h>
#include<string.h>

char* strswp(char *, char *);
int main()
{
    char str1[10]="awnish", str2[10]="name";
    strswp(str1,str2);
    printf("%s %s",str1,str2);
    getch();
    return 0;
}

char* strswp(char *x, char *y)
{
    char i[10];
    strcpy(i,x);
    strcpy(x,y);
    strcpy(y,i);
}
