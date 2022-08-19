//function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>
#include<conio.h>
#include<string.h>

void sort(int *, int);
int main()
{
    int i, arr[7]={5, 9, 1, 6, 12, 3, 11};
    sort(arr, 7);
    for(i=0; i<7; i++)
    printf("%d ",arr[i]);
    getch();
    return 0;
}

void sort(int *x, int y)
{
    int i, j, k;
    for(i=0; i<y; i++)
    {
        for(j=i+1; j<y; j++)
            if(*(x+i)>x[j])
            {
                k=x[j];
                x[j]=x[i];
                x[i]=k;
            }
    }
}
