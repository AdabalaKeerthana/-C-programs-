#include<stdio.h>
int main()
{
   float fh,cs;
   printf("enter temperature in celsius");
   scanf("%f",&cs);
   fh=(cs*(9.0/5.0))+32;
   printf("temperature in fahrenheit is %.2f",fh);
   return 0;
}
