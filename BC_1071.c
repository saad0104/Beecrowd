//Sum of Consecutive Odd Numbers I
//Beecrowd 1071


#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int i,j,sum=0;


   if(x<y)
    {
    for(i=x+1;i<y;i++)
    {

        if(i % 2 != 0)
        {
            sum=sum+i;
        }

    }
    }

    if(x>y)
    {
        for(i=y+1;i<x;i++)
    {

        if(i % 2 != 0)
        {
            sum=sum+i;

        }

    }
    }

     printf("%d\n",sum);



    return 0;
}
