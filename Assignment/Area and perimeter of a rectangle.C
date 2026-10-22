#include<stdio.h>
int main()
{
     float l,b;
     float area,perimeter;
     printf("enter lenght and breadth");
     scanf("%f%f",&l,&b);
     area=l*b;
     perimeter=2*(l+b);
     printf(" area of a rectangle is%.2f",area);
     printf("perimeter of a rectangle is %.2f",perimeter);
     return 0;
}
