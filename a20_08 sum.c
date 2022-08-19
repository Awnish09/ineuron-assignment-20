//program to compute the sum of all elements in an array using pointers.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void sum(int *, int *, int);
int main()
{
    int a, arr[5]={5, 9, 1, 6, 12};
    sum(arr, &a, 5);
    printf("%d",a);
    getch();
    return 0;
}

void sum(int x[], int *y, int z)
{
    int i;
    *y=0;
    for(i=0; i<z; i++)
        *y+=x[i];
    printf("%d\n",*y);
}
