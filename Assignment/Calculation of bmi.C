#include<stdio.h>
int main()
{
   int bmi,weight,height;
   printf("enter weight in kgs");
   scanf("%d",&weight);
   printf("enter height in meters");
   scanf("%d",&height);
   bmi=weight/(height*height);
   if(bmi<18.5)
    { 
      printf(" under weight");
    }
   else if(bmi< 25)
    {
      printf("normal weight");
    }
   else if(bmi<30)
     {
      printf("over weight");
    }
   else
    {
      printf(" obese");
    }
  return 0;
}
