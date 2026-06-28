#include<stdio.h>

int main()
{
    int secret=25,guess;
    do
    {
        printf("Guess the number:");
        scanf("%d",&guess);
        if(guess>secret)
        printf("too high!\n");
        else if(guess<secret)
        printf("too low!\n");
        else
        printf("correct!\n");
    }
    while(guess!=secret);
    return 0;
    
}