#include<stdio.h>
struct student
{
 char name[50];
 int age;
 int age1;
 float marks;
 }s1;
 union student1
{
 char name[50];
 int age;
 float marks;
}s2;
 void main()
{
 printf("size of structure variable is %d",sizeof(s1));
  printf("change in master branch");
 printf("size of union variable is %d\n",sizeof(s2));
}
