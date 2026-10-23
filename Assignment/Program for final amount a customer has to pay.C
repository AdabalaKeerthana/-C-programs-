#include<stdio.h>
int main()
{
     float amount,discount=0,delivery=0,final_amount;
     int membership;
     printf(" enter order amount");
     scanf("%f",&amount);
     printf("enter membership type");
     scanf("%d",&membership);
     if(amount>=500)
     {
         delivery=0;
            if(membership==1)
            {
                discount=amount*0.10;
            }
     }
     else
     {
          delivery=50;
     }
     final_amount=amount-discount+delivery;
     printf("final amount is %.2f",final_amount);
     return 0;
}
              
 
