//Experiments
//Beecrowd 1094

#include<stdio.h>
int main()
{
    int c=0,r=0,s=0;
    int n,x;
    char a;

    scanf("%d",&n);


    while(n>0)
    {

    scanf("%d %c",&x,&a);

    if(a=='C')
    {
        c=c+x;
    }
    if(a=='R')
    {
        r=r+x;
    }
    if(a=='S')
    {
        s=s+x;
    }

    //printf("%d %d %d",c,r,f);
    n--;
    }

    printf("Total: %d cobaias\n",c+r+s);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",((c*1.0/(c+r+s))*100.0));
    printf("Percentual de ratos: %.2f %%\n",((r*1.0/(c+r+s))*100.0));
    printf("Percentual de sapos: %.2f %%\n",((s*1.0/(c+r+s))*100.0));


    return 0;
}
