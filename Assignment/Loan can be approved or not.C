#include<stdio.h>
int main()
{
    int age,credit;
    float income;
    printf("enter age");
    scanf("%d",&age);
    printf("enter income");
    scanf("%f",&income);
    printf(" enter credit");
    scanf("%d",&credit);
    if(age>=21 && age<=60)
     { 
      if(income>=25000)
       { 
         if(credit>=700)
           {
              printf("loan approved");
           }
         else
           {
              printf("loan rejected if credit below 700");
           }
       }
     else
       {
           printf("loan rejected income below 25000");
       }
     }
   else
     {
        printf(" age is not ok");
     }
 return 0;
}
     
