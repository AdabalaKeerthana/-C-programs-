#include<stdio.h>
int main()
{ 
    float v,t,s;
    printf("enter velocity and time");
    scanf("%f%f",&v,&t);
    s=v*t;
    printf("distance travelled is %.2f",s);
    return 0;
}
