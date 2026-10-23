#include<stdio.h>
int main()
{
   int A,B,C,D,E,F,G,J,i,result1,result2,result3,result4;
   printf("Enter A,B,C,D,E,F,G Values");
   scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G);

   result1=A+B*C+(D*E)+F*G;
   printf("result1 is %d",result1);

   result2=A/B*C-B+A*D/3;
   printf("result2 is %d",result2);

   result3=A+++B---A;
   printf("result3 is %d",result3);

   result4=J=(i++)+(++i);
   printf("result4 is %d",result4);
 return 0;
}
