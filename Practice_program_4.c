#include<stdio.h>
int main()
{
float a;
float radius;
float p=3.141;
printf("radius: ");
scanf("%f", &radius);
a= p*radius*radius;
printf("area of circle is %f",a);
return 0;
}