#include<stdio.h>
struct contact
{
    char name[50];
    char phone[15];
};
int main()
{
  struct contact c;
  printf("enter name:");
  scanf("%s",c.name);
  printf("enter phone no:");
  scanf("%s",c.phone);
  printf("contact details");
  printf("name:%s",c.name);
  printf("phone:%s",c.phone);
  return 0;  
}