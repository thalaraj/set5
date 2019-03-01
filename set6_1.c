#include<stdio.h>

int main() 
{
   int a,n,i,k,p[6];
   printf("enter a number:\n");
   scanf("%d",&a);
   n=a;
   k=0;
   while(n!=0)
   {
      
       a=n%10;
       p[k]=a;
       k++;
       n=n/10;
   }
   for(i=k-1;i>=0;i--)
   {
     printf("%d\t",p[i]);
}
}
