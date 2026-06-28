#include<stdio.h>
int main()
{
    int ans,score=0;
    printf("Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Chennai\n");
    scanf("%d",ans);
    if(ans==1)
    score++;
    printf("2. 5+3=?\n");
    printf("1.6 2.7 3.8\n");
    scanf("%d",ans);
    if(ans==3);
    score++;
    printf("Your score=%d/2\n",score);
    return 0;
}