#include<stdio.h>
 
int main()
{
      int hours, mins, total_mins;
      printf("\nEnter Time in Hours and Mins:\n");
      printf("Hour:\t");
      scanf("%d", &hours);
      printf("Mins:\t");
      scanf("%d", &mins);
      total_mins = (hours * 60) + mins;
      printf("\nTotal Time in Mins:\t%d\n", total_mins);
      return 0;
}
