#include<stdio.h>
#include<math.h>
int main()
{
   float p,r,t,ci,amount;
   printf("enter principal,rate,time");
   scanf("%f%f%f",&p,&r,&t);
   amount=p*pow(1+r/100,t);
   ci=amount-p;
   printf("compound interest is %.2f",ci);
   return 0;
}
