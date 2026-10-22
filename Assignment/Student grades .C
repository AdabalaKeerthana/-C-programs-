#include<stdio.h>
int main()
{
   int mark;
   printf(" enter marks");
   scanf("%d",&mark);
   if(mark<0 ||mark> 100)
    { 
      printf("invalid mark");
    }
   else if( mark> 90)
    {
      printf("grade O");
    }
   else if(mark> 80)
    {
      printf("grade A+");
    }
   else if(mark> 70)
    {
      printf(" grade A");
    }
   else if( mark>60)
    {
      printf("grade B");
    }
   else if(mark>50)
    {
      printf("grade C");
    }
   else
    {
      printf("fail");
    }
 return 0;
}
