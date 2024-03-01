//Game Time with Minutes
//Beecrowd 1047

#include<stdio.h>
 int main()

 {
     int h1,h2,m1,m2,tot;

     scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

     tot = ((( h2 * 60 ) + m2 ) - ((h1 * 60 ) + m1 ));

     if ( tot <= 0)
     {
         tot = tot + (24*60);

     }

     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tot/60 ,tot%60);



     return 0;
 }
