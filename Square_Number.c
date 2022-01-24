#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    i=1;
   while(i<=n)
    {
    	if(i*i==n)
    	{
    		printf("True");
    		break;
		}
               	i++;     	
    }   
    if(i*i!=n)
    {
    	printf("False");
	}
}