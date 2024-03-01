//Several Scores with Validation
//Beecrowd 1118

#include<stdio.h>
int main()
{

double a,b=0,c=0,s=0;
int X;

 while(scanf("%lf",&a))
 {

     if(a>=0 && a<=10)
     {
         b++;
         s+=a;
     }
     else
     {
         printf("nota invalida\n");
     }

      if(b==2)
      {
          printf("media = %.2lf\n",s/2);

          s=0;

          printf("novo calculo (1-sim 2-nao)\n");

          while(scanf("%d",&X))
          {

              if(X==1)
              {
                  b=0;
                  break;
              }
              else if(X==2)
              {
                  c=X;
                  break;
              }
              else
              {
                  printf("novo calculo (1-sim 2-nao)\n");
              }



          }
           if(c==2)

                 break;

      }

 }





return 0;
}
