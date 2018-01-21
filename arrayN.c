#include <stdio.h>
void main() {
 int b[10],n,i;
 printf("Enter the number of eleme  the array:\n");
 scanf("%d",&n);
 printf("Enter the elemen of the array:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&b[i]);
 }
 if(n%2!=0)
 {
  printf("The median of array the  is %d",b[n/2]);
 }
 else
 {
  printf("The media of the array is %d",(b[n/2]+b[(n/2)-1])/2);
 }
 return 0;
}
