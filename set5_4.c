#include<stdio.h>

int main()
{
  int a,c=0,i;
  printf("enter a number:");
  scanf("%d",&a);
 for(i=1;i<=10;i++)
  {
      if(a==i)
      c++;
  }
    if(c!=0)
    {
        printf("yes");
    }
    else
    {
    printf("no");
    }
}
