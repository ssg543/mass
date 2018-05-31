#include<stdio.h>
void main()
{
    int day,saturday,sunday;
    printf("enter the day:");
    scanf("%d",&day);
    if(day==saturday||day==sunday)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
