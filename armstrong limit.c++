#include<iostream.h>
#include<conio.h>
int main()
{
int n,m,i,x,p=1,g=0;
cout<<"enter number intervals to print armstrong number  ";
cin>>n>>m;
for(x=n;x<=m;x++)
{
if(x!=0)
{
x=x/10;
for(i=0;i<3;i++)
{
p=p*x;
}
s=p+s;
}
if(g==n)
cout<<"%d"<<n;
}
return 0;
}
