#include<stdio.h>
int main()
{
  int id,password;
  printf(" enter id");
  scanf("%d",&id);
  printf(" enter password");
  scanf("%d",&password);
  if(id==101)
   {
     if(password==4321)
       {
          printf("login successful");
       }
     else 
       {
          printf("incorrect password");
       }
   }
  else
    {
       printf("User not found");
    }
  return 0;
}
