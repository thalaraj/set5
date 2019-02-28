#include <stdio.h>

int main() 
{
	int a,n,c=0;
	scanf("%d",&a);
	n=a;
    while(n!=0)
    {
    c++;
    n=n/10;
    }
    printf("%d",c);
	return 0;	
}
