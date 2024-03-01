//Snack
//Beecrowd 1038

#include<stdio.h>
 int main()
 {
     int x,y;
     float total;
     scanf("%d %d",&x,&y);

     if(x == 1)
     {
       total = 4.0 * y;
     }
     else if(x == 2)
     {
         total = 4.5 * y;
     }
     else if(x == 3)
     {
         total = 5.0 * y;
     }
     else if(x == 4)
     {
         total = 2.0 * y;
     }
     else if(x == 5)
     {
         total = 1.5 * y;
     }

     printf("Total: R$ %.2f\n",total);


     return 0;
 }
