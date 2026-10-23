#include<stdio.h>
int main()
{
   int choice;
   float balance,amount;
   printf("Enter current balance:");
   scanf("%f",&balance);

   printf("1.Balance Inquiry\n");
   printf("2.Cash withdrawl\n");
   printf("3.Cash deposit\n");

   printf("Enter your choice:");
   scanf("%d",&choice);
   if(choice==1)
     { 
        printf("current balance is %.2f",balance);
     }

   else if(choice==2)
   {
     {
        printf("Enter withdrawl amount:");
        scanf("%f",&amount);
     }

        if( amount<=balance&&amount>0)
        {
           balance=balance-amount;
           printf("Transaction successful\n");
           printf("Remaining balance is %.2f",balance);
        }

     else
       {
          printf("Insufficient balance");
       }
    }

    else if(choice==3)
    {
       printf("Enter deposit amount:");
       scanf("%f",&amount);

        if(amount>0)
        {
          balance=balance+amount;
          printf("Deposit successful\n");
          printf("updated balance is %.2f",balance);
        }

      else
       {
         printf("Invalid amount");
       }
    }

     else
       {
          printf("Invalid option");
       }
    return 0;
}
