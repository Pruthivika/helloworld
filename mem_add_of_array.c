#include <stdio.h>
#include <stdlib.h>
#define MAX 100


void pointer(int *p)
{

int x=0;
    while(*p)
    {
        printf("\nMemory address of array Element [%d] is : %p",x++,p++);
    }

    return ;
}

int main()
{
    int array[MAX],n,x;

    for(x=0;x<MAX;x++)
    {

        array[x]=NULL;
    }

    printf("How many Elements your wish to enter :");
    scanf("%d",&n);

    if(n>MAX)
       {
           printf("\nMemory Error");
    exit(-1);
       }

    for(x=0;x<n;x++)
    {
        printf("Enter Element[%d] :",x);
        scanf("%d",&array[x]);
    }

     pointer(array);

     printf("\n");




    return 0;
}
