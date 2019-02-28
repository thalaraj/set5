#include<stdio.h>
#include<string.h>

int main()
{
int k,i;
char s[50];
printf("enter the string and no. of times to print\n" );
scanf("%s",&s);
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%s",s);
printf("\n");
}
}
