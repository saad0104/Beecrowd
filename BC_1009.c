//Salary with Bonus
//Beecrowd 1009

#include<stdio.h>
int main()
{
  double fixed,sale,bonus;
  char name[30];
  scanf("%s",&name[100]);
  scanf("%lf %lf",&fixed,&sale);
  bonus=(sale*15.0)/100.0;
 //printf("%.2f",bonus);
  printf("TOTAL = R$ %.2lf\n",bonus+fixed);

  return 0;
}
