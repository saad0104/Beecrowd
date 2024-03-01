//Triangle
//Beecrowd 1043

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s,peri,area;
    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b)
    {
        printf("Perimetro = %.1f\n",(a+b+c));
    }
    else
    {
        area=(c*(a+b)/2);
        printf("Area = %.1f\n",area);
    }





    return 0;
}
