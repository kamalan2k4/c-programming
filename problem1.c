#include<stdio.h>
int main()
{
    int age;
  while(1)
  {
    
    printf("\nenter the age:");
    scanf("%d",&age);
    if ((age<18) || (age>60))
    {
        printf("you cannot be employed.");
  }
    else
    printf("you are employed.");}
}
