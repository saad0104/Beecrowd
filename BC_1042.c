//Simple Sort
//Beecrowd 1042

#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    if(x>y && y>z && x>z)
    {
        printf("%d\n",z);
        printf("%d\n",y);
        printf("%d\n",x);
        printf("\n");
        printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",z);
    }
    if(x>z && z>y && x>y)
    {
        printf("%d\n",y);
        printf("%d\n",z);
        printf("%d\n",x);
        printf("\n");
        printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",z);
    }
    if(z>x && x>y && z>y){

        printf("%d\n",y);
        printf("%d\n",x);
        printf("%d\n",z);
        printf("\n");
        printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",z);
    }
    if(z>y && y>x && z>x)
    {
        printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",z);
        printf("\n");
        printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",z);
    }

    if(y>z && y>x && z>x)
    {
        printf("%d\n",x);
        printf("%d\n",z);
        printf("%d\n",y);
        printf("\n");
        printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",z);
    }

     if(y>x && x>z && y>z)
    {
        printf("%d\n",z);
        printf("%d\n",x);
        printf("%d\n",y);
        printf("\n");
        printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",z);
    }


    return 0;
}
