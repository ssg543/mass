#include<stdio.h>
void main()
{
    char odd[50],even[50],str[50],j=0,k=0;
    int i=0;
    scanf("%c",&str[i]);
    while(str[i]!='\0')
    {
    if(str[i]%2==0)
    {
        even[j]=str[i];
        j++;
    }
    else
    {
        odd[k]=str[i];
        k++;
    }
    i++;
    }
    printf("%c",even[j]);
    printf("%c",odd[k]);
}
