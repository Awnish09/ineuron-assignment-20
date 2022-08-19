//program to find the maximum number between two numbers using a pointer

#include<stdio.h>
#include<conio.h>
#include<string.h>

int* max(int *, int *);
int main()
{
    int i= 5, j=2;
    printf("%d is maximum", *(max(&i, &j)));
    getch();
    return 0;
}

int* max(int *x, int *y)
{
    if(*x>*y)
        return x;
    else
        return y;
}
