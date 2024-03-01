//Score Validation
//Beecrowd 1117

#include<stdio.h>
int main()
{
    float a,b,c=0,d=0;

    while(1)
    {
        if(d==2)
            break;

        scanf("%f",&a);

        if(a>0 && a<=10)
        {
            d++;
            c=c+a; //at first c=0,c=0+a=a...then c=a1+a2;
        }
        else
            printf("nota invalida\n");

    }
    b=c/2.00;
    printf("media = %.2lf\n",b);

    return 0;
}
