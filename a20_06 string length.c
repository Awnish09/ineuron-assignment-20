//program to calculate the length of the string using a pointer

#include<stdio.h>
#include<conio.h>
#include<string.h>

int length(char *);
int main()
{
    int l;
    char str[25]="This is a beautiful day";
    l=length(str);
    printf("size of the string is %d",l);
    getch();
    return 0;
}

int length(char *x)
{
    int i;
    for(i=0; x[i]; i++);
    return i;
}
