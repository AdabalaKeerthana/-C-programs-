#include<stdio.h>
int main()
{
   float fh,cs;
   printf("enter temperature in faheenheit");
   scanf("%f",&fh);
   cs=(fh-32)*(5.0/9.0);
   printf("temperature in celsius is %.2f",cs);
   return 0;
}
