#include<stdio.h>

int main()
{
    int a[100],b,j,t,i;
    printf("enter how many numbers\nenter the numbers");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
        //printf("%d\n",a[i]);
    }
    printf("\nsmallest no. is :%d\nlargest no. is:%d",a[0],a[b-1]);
}
