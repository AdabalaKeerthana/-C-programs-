#include<stdio.h>
int main()
{
    int a,b,c,d,max,min;
    printf("enter four numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    min=max=a;

    if(b> max)
       max=b;
    else if (b<min)
       min=b;

    if(c> max)
       max=c;
    else if( c<min)
       min=c;

    if(d> max)
      max= d;
    else if(d< min)
      min=d;

   printf("Maximum is %d",max);
   printf("Minimum is %d\n",min);
   return 0;
}
