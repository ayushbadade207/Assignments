#include<stdio.h>
int main()
{
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    float marks;
    float percentage;
    float total_marks;
printf("enter the marks of subject 1");
scanf("%f", &sub1);
printf("enter the marks of subject 2");
scanf("%f", &sub2);
printf("enter the marks of subject 3");
scanf("%f", &sub3);
printf("enter the marks of subject 4");
scanf("%f", &sub4);
printf("enter the marks of subject 5");
scanf("%f", &sub5);
printf("enter total marks: ");
scanf("%f", &total_marks);

marks=sub1+sub2+sub3+sub4+sub5;
percentage=marks*100/total_marks;
printf("percentage %f", percentage);
return 0;
}