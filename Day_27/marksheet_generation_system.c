#include<stdio.h>
int main()
{
    int m1,m2,m3,total;
    float per;
    printf("Enter marks of three subjects:");
    scanf("%d%d%d",&m1,&m2,&m3);
    total=m1+m2+m3;
    per=total/3.0;
    printf("\ntotal=%d\n",total);
    printf("percentage=5.2f\n",per);
    if(per>=90)
    printf("grade=A+\n");
    else if(per>=75)
    printf("grade=A\n");
    else if(per>=60)
    printf("grade=B\n");
    else if(per>=40)
    printf("grade=C\n");
    else
    printf("grade=fail");
    return 0;
}