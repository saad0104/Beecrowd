//Grenais
//Beecrowd 1131

#include<stdio.h>
int main()
{
	int inter,gremio,x;
    int in=0,gr=0,draw=0,a=0;
	while(1)
	{
		scanf("%d %d",&inter,&gremio);
	if(inter>gremio)
	{
	in=in+1;
	}
	else if(gremio>inter)
	{
	gr=gr+1;
	}
	else if(inter==gremio)
	{
     draw=draw+1;
	}

         a=a+1;  
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&x);
		if(x==1)
		{
                 continue;
		}
		else if(x==2)
                {
                 break;
		}
          }


            printf("%d grenais\n",a);
	    printf("Inter:%d\n",in);
	    printf("Gremio:%d\n",gr);
            printf("Empates:%d\n",draw);
           if(in>gr)
		   {
             printf("Inter venceu mais\n");
		   }
		   else if(gr>in)
		   {
          printf("Gremio venceu mais\n");
		   }
		   else if(in==gr)
		   {
           printf("Não houve vencedo\n");
		   }  
	return 0;
}



