#include<stdio.h>
void main()
{
    int L,B,H,v,sa;
    printf("enter the values:");
    scanf("%d,%d,%d",&L,&B,&H);
    v=L*B*H;
    sa=(2*1*B)+(2*1*B)+(2*1*B);
    printf("volume is%d",v);
    printf("surface area is%d",sa);
}
