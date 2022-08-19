//program to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void count(char *, int *, int *);
int main()
{
    int vow, con;
    char str[25]="This is a beautiful day";
    count(str, &vow, &con);
    printf("There are %d vowels and %d consonants in the string.",vow,con);
    getch();
    return 0;
}

void count(char *x, int *a, int *b)
{
    int i;
    *a=0;
    *b=0;
    for(i=0; x[i]; i++)
    {
        if(x[i]=='a' || x[i]=='A' || x[i]=='e'||x[i]=='E'||x[i]=='i'||x[i]=='I'||x[i]=='o'||x[i]=='O'||x[i]=='u'||x[i]=='U'&& x[i]!=' ')
            *a++;
        else if(x[i]!=' ')
            *b+=1;
    }
}
