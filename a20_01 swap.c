//function to swap values of two in variables of calling function.

#include<stdio.h>
#include<conio.h>

int* swap(int *, int *);int main()
{
    int a=5, b=12;
    swap(&a,&b);
    printf("%d %d",a,b);
    getch();
    return 0;
}

int* swap(int *x, int *y)
{
    int i;
    i=*x;
    *x=*y;
    *y=i;
}
