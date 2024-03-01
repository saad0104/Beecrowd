//Avarage 3
//Beecrowd 1040

#include<stdio.h>
int main()

{
    float a,b,c,d,avg,re,reavg;
    scanf("%f %f %f %f",&a,&b,&c,&d);

    avg=((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);

    printf("Media: %.1f\n",avg);

    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
   else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }
   else if(5.0<avg<6.9)
    {
        printf("Aluno em exame.\n");
                scanf("%f\n",&re);
        printf("Nota do exame: %.1f",re);

        reavg=(avg+re)/2;
        //printf("%f\n",re);

        if(reavg>=5)
        {
             printf("\nAluno aprovado.\n");
        }
        else if(reavg<=4.9)
        {
           printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n",reavg);


    }



    return 0;
}
