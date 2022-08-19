//program to print the elements of an array in reverse order.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int a, arr[5]={5, 9, 1, 6, 12};
    for(a=4; a>=0; a--)
        printf("%d ",arr[a]);
    getch();
    return 0;
}
