#include<iostream.h>
#include<conio.h>
int main()
{
int A[100],i,t,n;
cout<<"enter the size of the an arrays";
cin>>n;
cout<<"enter the value";
for(i=0;i<n;i++)
{
cin>>A[i];
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
if(A[i])>A[j])
   { 
    t=A[i];
    A[i]=A[j];
    A[j]=t;
    }
}
cout<<"max num is %d"<<A[0]);
return 0;
}
