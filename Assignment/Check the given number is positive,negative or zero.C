#include<stdio.h>
int main()
{
    int n;
    printf(" enter a number");
    scanf("%d",&n);
    if(n>0)
       { 
           printf("it is a positive number");
       }
    else if(n<0)
       { 
           printf("it is a negative number");
       }
    else
      { 
           printf("it is a zero");
      }
     return 0;
}
