#include<stdio.h>
int main()
{
  char ch;
  printf(" enter a character");
  scanf("%c",&ch);
  if(ch>'0'&& ch<'9')
   {
    printf(" it is a digit");
   }
  else if(ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U'||
          ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
   {
    printf(" is is a vowel");
   }
  else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'));
   {
    printf("it is a consonant");
   }
  else
  {
   printf(" it is a special character");
  }
  return 0;
}
