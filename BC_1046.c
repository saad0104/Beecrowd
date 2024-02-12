#include<stdio.h>
int main ()
{
    int start,end,dur;
    scanf("%d %d",&start,&end);

    if( start > end )
    {
       dur = (end + 24) - start;
       printf("O JOGO DUROU %d HORA(S)\n",dur);

    }

    else if( end > start )
    {

        dur = end - start ;
        printf("O JOGO DUROU %d HORA(S)\n",dur);
    }

    else if ( start == end )
     {

         dur = 24;
         printf("O JOGO DUROU %d HORA(S)\n",dur);
     }


    return 0;
}
